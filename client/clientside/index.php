<html>
<head>
<script language="javascript" type="text/javascript" src="./jscript/cxf-utils.js" defer></script>
<script language="javascript" type="text/javascript" src="./jscript/Alm.js" defer></script>
<link rel="stylesheet" type="text/css" href="./jquery-1.8.18/themes/base/jquery.ui.all.css">
<link rel="stylesheet" type="text/css" href="./jquery-loadmask-0.4/jquery.loadmask.css" />
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/jquery-1.7.1.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.core.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.widget.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.datepicker.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.position.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.autocomplete.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.button.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.tabs.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.progressbar.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.mouse.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.draggable.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.position.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.resizable.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.dialog.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-1.8.18/ui/jquery.ui.accordion.js"></script>
<script language="javascript" type="text/javascript" src="./jquery-loadmask-0.4/jquery.loadmask.min.js"></script>
<link href="./css/style.css" rel="stylesheet" type="text/css">
<script language="javascript" type="text/javascript" src="./jscript/javascript.js"></script>
</head>
<body>
<div id="all">
	<ul>
		<li value="ssd"><a href="#ssd">SSD</a></li> 
		<li value="mad"><a href="#mad">MAD</a></li>
		<li value="help"><a href="#help">Help</a></li>
	</ul>
	<div id="ssd">
		<div class="problem"> 
			<div>
				<fieldset id="symbolset_ssd">
					<legend>Stock Symbols</legend>
					<input type="text" class="symbol" value="GOOG">
					<input type="text" class="symbol" value="AAPL">
					<input type="text" class="symbol" value="MSFT">
				</fieldset>
			</div>
			<div>
				<fieldset>
					<legend>Benchmark</legend>
					<input id="benchmark" type="text" class="benchmark" value="^IXIC">
				</fieldset>
			</div>
			<div>
				<fieldset>
					<legend>Data Range</legend>
					<label>Start Date:</label><input type="text" id="startdate_ssd" class="date">
					<label>End   Date:</label><input type="text" id="enddate_ssd" class="date">
				</fieldset>
			</div>
		</div>
		<div>
			<button action="add">Add Symbol</button>
			<button action="del">Delete Symbol</button>
			<button action="solve">Solve</button>
		</div>
		
		<div class="result">
			<textarea id="result_area_ssd" readonly></textarea>
		</div>
	</div>
	
	<div id="mad">
		<div class="problem"> 
			<div>
				<fieldset id="symbolset_mad">
					<legend>Stock Symbols</legend>
					<input type="text" class="symbol" value="GOOG">
					<input type="text" class="symbol" value="AAPL">
					<input type="text" class="symbol" value="MSFT">
				</fieldset>
			</div>
			<div>
				<fieldset>
					<legend>Return ratio</legend>
					<input id="returnRatio" type="text" value="0.01">
				</fieldset>
			</div>
			<div>
				<fieldset>
					<legend>Data Range</legend>
					<label>Start Date:</label><input type="Text" class="date" id="startdate_mad">
					<label>End   Date:</label><input type="Text" class="date" id="enddate_mad">
				</fieldset>
			</div>
		</div>
		<div>
			<button action="add">Add Symbol</button>
			<button action="del">Delete Symbol</button>
			<button action="solve">Solve</button>
		</div>
		
		<div class="result">
			<textarea id="result_area_mad" readonly></textarea>
		</div>
	</div>
	<div id="help">
		<div id="sections">
			<h3><b><a href="#">Intro</a></b></h3>
			<div>
				<ul>
				<li>This application can help you decide which stocks to buy in order to maximise your return and hedge against risk. It does so by using algorithms developed by the <a href="http://www.maths.ed.ac.uk/ERGO" target="_blank">Operational Research group at the School of Mathematics at the University of Edinburgh.</a></li>
				<li>You can choose one of two Portfolio Optimization models: Mean Absolute Deviation (MAD) or Second Order Stochastic Dominance (SSD) - more on them below. You are further asked for a set of stocks to choose from. By default these are Google (GOOG), Apple (AAPL) and Microsoft (MSFT). You can add as many additional stocks as you like, just type in their <a href="http://www.marketwatch.com/tools/quotes/lookup.asp" target="_blank">Ticker Symbol</a>. The models estimate the portfolios future return and risk exposure buy analysing time series of past stock closing prices. In the start/end date section enter the data range for which past data should be gathered. Depending on the model used you are also asked for some additional information: for the SSD model a benchmark that should be outperformed (again given by its Ticker Symbol, the default is the Dow Jones index) and for the MAD model a yearly target return.</li>
				<li>After pressing the "Solve" button the program will return to you the optimal portfolio composition, i.e. the percentage of your total budget that should be invested in each stock.</li>
				</ul>
			</div>
			<h3><b><a href="#">The Models</a></b></h3>
			<div>
				<ul>
				<li>The Portfolio Optimization models attempt to maximise expected return from an investment, while controlling risk exposure. The two models that are implemented differ by how risk is controlled. Possibly the most prominent way of controlling risk is to limit the variance of the portfolio (as suggested by Nobel Price laureate Harry Markowitz). The variance however is sensitive to outliers in the data, resulting in data sensitive portfolios. As an alternative the use of Mean Absolute Deviation (MAD) has been suggested. The MAD model will seek among the portfolio that are projected to exceed the target return, the one with the lowest MAD.</li>
				<li>In bad market conditions it may not be possible to achieve a given target return with any investment strategy. This is addressed by the second model. Mathematically portfolio (or stock/index) returns are random variables. Stochastic Dominance is a way of imposing a partial order on random variables, that is directly expressing which of two portfolios/assets is preferable without resorting to substitutes such as means or variances. It can be shown that a certain portfolio is better than another one under Second order Stochastic Dominance (SSD) precisely if this portfolio would be preferred by *every* risk averse investor. The SSD model finds the portfolio with the highest projected return among all those that would be preferable to pure investment in the given benchmark (eg the Dow Jones index) under SSD.</li>
				</ul>
			</div>
			<h3><b><a href="#">The Algorithms</a></b></h3>
			<div>
				<ul>
				<li>MAD and SSD are standard portfolio optimization techniques. They are usually employed within a stochastic programming setting. One of the drawback of stochastic programming is that it can lead to very large optimization problems (although ones with a high degree of exploitable structure). The OR group at Edinburgh has developed OOPS, an Interior Point Solver that highly efficient at exploiting such structure (and has been used to solve extremely large instance of Portfolio Optimization problems on a Supercomputer, in fact some of the largest optimization problems solved to date: more than 1 billion variables) and SML, a modelling system to facilitate the modelling of such structured problems. Both are used in the software that is driving this application.</li>
				</ul>
			</div>
			
			<h3><b><a href="#">Contact Us</a></b></h3>
			<div>
				<ul>
					<li>This application is to demonstrate the research work at University of Edinburgh's <a href="http://www.maths.ed.ac.uk/ERGO/" target="_blank">OR group</a>.</li>  
					<li>You can <a href="mailto:F.Qiang@sms.ed.ac.uk">report a bug</a> by sending us email. </li>
				</ul>
			</div>
			
<!-- 			<h3><a href="#">SSD Model</a></h3> -->
<!-- 			<div> -->
<!-- 				<p>Portfolio Optimization with Second-order Stochastic Dominance</p> -->
<!-- 				<ul> -->
<!-- 					<li><b>Stock Symbols:</b> A stock symbol should be filled in each textbox. The stock symbol must be valid and exist on <a href="http://www.google.ca/finance" target="_blank">Google Finance</a>.</li>   -->
<!-- 					<li><b>Benchmark:</b> To be filled with a stock index symbol, so that the computed optimal portfoilo would perform better than it stochastically. The index symbol must be valid and exist on <a href="http://uk.finance.yahoo.com/"> Yahoo Finance</a>.</li> -->
<!-- 					<li><b>Data Range:</b> The start and end date for the stock pricing data retrieval. Weekly stock pricing data will be retrieved.</li> -->
<!-- 					<li><b>Add Symbol,Del Symbol</b> buttons are used to add or del a textbox on the stock symbols field.</li> -->
<!-- 					<li><b>Solve</b> button is used to send the request to the web service which is powered by <a href="http://www.maths.ed.ac.uk/ERGO/sml/" target="_blank">SML</a> and <a href="http://www.maths.ed.ac.uk/~gondzio/parallel/solver.html" target="_blank">OOPS</a>.</li> -->
<!-- 				</ul> -->
<!-- 			</div> -->
			
<!-- 			<h3><a href="#">MAD Model</a></h3> -->
<!-- 			<div> -->
<!-- 				<p>Portfolio Optimization with Mean Absolute Derivation(MAD) as risk measurement</p> -->
<!-- 				<ul> -->
<!-- 					<li><b>Stock Symbols:</b> In each textbox, a stock symbol should be filled. The stock symbol must be valid and exist on <a href="http://www.google.ca/finance" target="_blank">Google Finance</a>.</li>   -->
<!-- 					<li><b>Return Ratio:</b> The miminal return ratio that you want for your optimized portfolio.</li> -->
<!-- 					<li><b>Data Range:</b> The start and end date for the stock pricing data retrieval. Weekly stock pricing data will be retrieved.</li> -->
<!-- 					<li><b>Add Symbol,Del Symbol</b> buttons are used to add or del a textbox on the stock symbols field.</li> -->
<!-- 					<li><b>Solve</b> button is used to send the request to the web service which is powered by <a href="http://www.maths.ed.ac.uk/ERGO/sml/" target="_blank">SML</a> and <a href="http://www.maths.ed.ac.uk/~gondzio/parallel/solver.html" target="_blank">OOPS</a>.</li> -->
<!-- 				</ul> -->
<!-- 			</div> -->
		</div>
	</div>
	<div id="dialog">
		<p>testing</p>
	</div>
</div>
<?php 
	$debug = $_GET['debug'];
	if(isset($debug))
	{
?>
<textarea id="debug_area" readonly ></textarea>
<?php
	}
	else
	{
?>
<textarea id="debug_area" readonly style="visibility:hidden"></textarea>
<?php
	}
?>
</body>
</html>
