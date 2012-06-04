var stockSymbols = [
	"BMO",
	"AAPL",
	"MSFT",
	"GOOG",
	"ORCL",
	"YHOO"
];
var benchmarks = [
	"^IXIC",
	"^NDX"
];

$.datepicker.setDefaults({
		dateFormat: 'yy-mm-dd',
		autoSize: true
});

$(function() {
		$( ".date" ).datepicker();
});

$(function() {
	$( ".symbol" ).autocomplete({
		source: stockSymbols
	});
	$("#benchmark").autocomplete({
		source: benchmarks
	});
});

$(function() {
	$( "#ssd button" ).click(function(){
		handleButtonAction("ssd",$(this).attr("action"));
	});
	$( "#mad button" ).click(function(){
		handleButtonAction("mad",$(this).attr("action"));
	});
});

$(function() {
	$( "#sections" ).accordion({
		autoHeight: false
		
	});
});

$(function() {
	$("#all").tabs();
});

$(function() {
	$( "#dialog" ).dialog({
		position: [5,80],
		modal: true,
		autoResize:true,
		autoOpen:false
	});
	$("#dialog").hide();
});

function handleButtonAction(type,action)
{
	logDebug("button pressed - type["+type+"] action["+action+"]");
	if(action=="add")
	{
		addSymbol(type);
		$('#'+type+' button[action="del"]').attr("disabled",false);
		$('#'+type+' button[action="solve"]').attr("disabled",false);
	}
	else if(action=="del")
	{
		delSymbol(type);
		var elements = $("#symbolset_"+type+" input");	
		if(elements.length==0)
		{
			logDebug("diabling the button --"+'#'+type+' button[action="del"]');
			$('#'+type+' button[action="del"]').attr("disabled",true);
			$('#'+type+' button[action="solve"]').attr("disabled",true);
		}
	}
	else if(action=="solve" && (type=="ssd" || type=="mad"))
	{
		if(validateInput(type))
		{
			solveProblem(type);	
			$("#all").mask("Communicating with web service...");
			$('#'+type+' button[action="solve"]').attr("disabled",true);
		}
	}
}

function validateInput(type)
{
	var elements = $("#symbolset_"+type+" input");
	for(i=0;i<elements.length;i++)
	{
		if(elements[i].value=="")
		{
			displayDialogMsg("Invalid user input!","All stock symbols should be filled.");
			return false;	
		}
	}
	var dates = $('#'+type+' .date');
	for(i=0;i<dates.length;i++)
	{
		if(dates[i].value=="")
		{
			displayDialogMsg("Invalid user input!","Please input date range.");	
			return false;
		}
	}
	return true;
}

function solveProblem(type)
{
	if(type=="mad")
	{
		invokeOptimizePortfolioMAD();
	}
	else if(type=="ssd")
	{
		invokeOptimizePortfolioSSD();
	}
}

function invokeOptimizePortfolioSSD()
{
	document.getElementById("result_area_ssd").value="";
	logDebug("invokeOptimizePortfolioSSD");
	var ss = new AX21_SymbolSet();
	var element = document.getElementById("symbolset_ssd");
	var ele_symbols = element.getElementsByTagName("input");
	var i=0;
	var symbols = new Array();
	for(i=0;i<ele_symbols.length;i++)
	{
		symbols[i]=ele_symbols[i].value;
		logDebug("add symbol: "+symbols[i]);
	}
	ss.setSymbols(symbols);
	var bmark = document.getElementById("benchmark").value;
	logDebug("benchmark : "+bmark);
	var startdate = document.getElementById("startdate_ssd").value+"T00:00:00";
	logDebug("start date: "+startdate);
	var enddate = document.getElementById("enddate_ssd").value+"T00:00:00";
	logDebug("end date: "+enddate);
	var porter = new uk_ac_ed_maths_org_AlmPortType();
	porter.url = "/axis2/services/Alm";
	logDebug("calling web service at ===> "+porter.url);
	porter.optimizePortfolioSSD(optimizePortfolioSSDResponse,optimizePortfolioSSDError,ss,bmark,startdate,enddate);	
}

function invokeOptimizePortfolioMAD()
{
	document.getElementById("result_area_mad").value="";
	logDebug("invokeOptimizePortfolioMAD");
	var ss = new AX21_SymbolSet();
	var element = document.getElementById("symbolset_mad");
	var ele_symbols = element.getElementsByTagName("input");
	var i=0;
	var symbols = new Array();
	for(i=0;i<ele_symbols.length;i++)
	{
		symbols[i]=ele_symbols[i].value;
		logDebug("add symbol: "+symbols[i]);
	}
	ss.setSymbols(symbols);
	var returnRatio = document.getElementById("returnRatio").value;
	logDebug("returnRatio : "+returnRatio);
	var startdate = document.getElementById("startdate_mad").value+"T00:00:00";
	logDebug("start date: "+startdate);
	var enddate = document.getElementById("enddate_mad").value+"T00:00:00";
	logDebug("end date: "+enddate);
	var porter = new uk_ac_ed_maths_org_AlmPortType();
	porter.url = "/axis2/services/Alm";
	logDebug("calling web service at ===> "+porter.url);
	porter.optimizePortfolioMAD(optimizePortfolioMADResponse,optimizePortfolioMADError,ss,returnRatio,startdate,enddate);
}

function optimizePortfolioMADResponse(response)
{
	logResponseXML(response);
	var ele_result = document.getElementById("result_area_mad");
	var madReturn = response.getReturn();
	if(madReturn.getResultCode()==0) {
		var expRet = madReturn.getExpReturn(); 
		var ratios = madReturn.getPortfolioRatio();
		var result = "The minimial risk is "+expRet + "\n";
		result += "Asset allocation: \n";
		
		var ele_symbolset = document.getElementById("symbolset_mad");
		var ele_symbols = ele_symbolset.getElementsByTagName("input");
		var i=0;
		for(i=0;i<ele_symbols.length;i++)
		{
			result += ele_symbols[i].value + "\t: " +Math.round(ratios[i]*10000)/100 + "% \n";
		}
		ele_result.value = result.toString();
	}
	else if(madReturn.getResultCode()==1)
	{
		ele_result.value = "Problem Infeasible or Unbounded!";
	}
	else if(madReturn.getResultCode()==2)
	{
		ele_result.value = "Excess Solver's Iteration Limit!";
	}
	else if(ssdReturn.getResultCode()==3)
	{
		ele_result.value = "Data retrieval error! Data points doesn't match.";
	}
	handleCallback("mad");
}

function optimizePortfolioSSDResponse(response)
{
	logResponseXML(response);
	var ele_result = document.getElementById("result_area_ssd");
	var ssdReturn = response.getReturn();
	if(ssdReturn.getResultCode()==0) {
		var expRet = ssdReturn.getExpReturn(); 
		var ratios = ssdReturn.getPortfolioRatio();
		var result = "The final wealth is "+(-expRet)*100 + "% of the oringal investment.\n";
		result += "Asset allocation (in percentage of oringal investment): \n";
		
		var ele_symbolset = document.getElementById("symbolset_ssd");
		var ele_symbols = ele_symbolset.getElementsByTagName("input");
		var i=0;
		for(i=0;i<ele_symbols.length;i++)
		{
			result += ele_symbols[i].value + "\t: " +Math.round(ratios[i]*10000)/100 + "% \n";
		}
		ele_result.value = result.toString();
	}
	else if(ssdReturn.getResultCode()==1)
	{
		ele_result.value = "Problem Infeasible or Unbounded!";
	}
	else if(ssdReturn.getResultCode()==2)
	{
		ele_result.value = "Excess Solver's Iteration Limit!";
	}
	else if(ssdReturn.getResultCode()==3)
	{
		ele_result.value = "Data retrieval error! Data points doesn't match.";
	}
	handleCallback("ssd");
}

function optimizePortfolioMADError(error)
{
	handleWebServiceError("mad",error);
}

function optimizePortfolioSSDError(error)
{
	handleWebServiceError("ssd",error);	
}

function handleWebServiceError(type,error)
{
	displayDialogMsg("Serverside Error","Axis2 service not aviable");
	handleCallback(type);
}

function handleCallback(type)
{
	$("#all").unmask();
	$('#'+type+' button[action="solve"]').attr("disabled",false);
}

function displayDialogMsg(title,msg)
{
	$("#dialog").dialog("option","title",title);
	$("#dialog p").html(msg);
	$("#dialog").show().dialog("open");
}

function addSymbol(type)
{
	logDebug("addSymbol --type["+type+"]");
	var element = document.createElement("input");
	element.setAttribute("type","text");
	element.setAttribute("value","");
	element.setAttribute("class","symbol");
	element.setAttribute("maxlength",8);
	element.setAttribute("size",8);
	
	$(element).autocomplete({
		source: stockSymbols
	});
	var place = document.getElementById("symbolset_"+type);
	place.appendChild(element);
}
function delSymbol(type)
{
	var place = document.getElementById("symbolset_"+type);
	var elements = place.getElementsByTagName("input");
	place.removeChild(elements[elements.length-1]);
}

function logResponseXML(response)
{
	var jsutils = new CxfApacheOrgUtil();
	var ret = response.getReturn();
	var xml = ret.serialize(jsutils,ret,null);
	logDebug(xml); 
}

function logDebug(message)
{
	document.getElementById("debug_area").value += message+"\n";
	document.getElementById("debug_area").scrollTop=document.getElementById("debug_area").scrollHeight;
}