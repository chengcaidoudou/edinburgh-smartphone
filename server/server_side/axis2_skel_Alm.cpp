

    /**
     * axis2_skel_Alm.c
     *
     * This file was auto-generated from WSDL for "Alm|http://uk.ac.ed.maths.org" service
     * by the Apache Axis2/C version: 1.6.1  Built on : Aug 31, 2011 (12:22:40 CEST)
     * axis2_skel_Alm Axis2/C skeleton for the axisService
     */

     #include "axis2_skel_Alm.h"


#include <string>
#include <sstream>
#include <stdio.h>
#include "GlobalVariables.h"
#include "DataRetriever.h"
#include "AlmDataWriter.h"

//#ifdef __cplusplus
//extern "C"
//{
//#endif


		using namespace std;

//		std::string exec(const char* cmd,const axutil_env_t* env) {
//			AXIS2_LOG_INFO(env->log,"executing smloops [%s]",cmd);
//		    FILE* pipe = popen(cmd, "r");
//		    if (!pipe) return "ERROR";
//		    char buffer[128];
//		    std::string result = "";
//		    while(!feof(pipe))
//		    {
//		        if(fgets(buffer, 128, pipe) != NULL)
//		        {
//		                result += buffer;
//		                AXIS2_LOG_INFO(env->log,"executing smloops [%s]",buffer);
//		        }
//		    }
//		    pclose(pipe);
//		    return result;
//		}


		int executeSMLOOPS(const axutil_env_t* env,string modFilename,string dataFilename,double solutions[],double& optValue)
		{
			int retCode = 0;
			//oss<<"mpiexec -np 1 ";  //-- mpiexec not exiting..
			ostringstream oss(ostringstream::out);
			oss<<GlobalVariables::ALM_SERVICE_HOME<<GlobalVariables::SMLOOPS_EXEC<<" ";
			oss<<GlobalVariables::ALM_SERVICE_HOME<<modFilename<<" ";
			oss<<GlobalVariables::ALM_SERVICE_HOME<<dataFilename;

			string cmd = oss.str();
			AXIS2_LOG_INFO(env->log,"executing smloops [%s]",cmd.c_str());
			//string result = exec(cmd.c_str(),env);
			FILE* pipe = popen(cmd.c_str(),"r");
			if(!pipe)
			{
				retCode = -1;
				AXIS2_LOG_INFO(env->log,"can't create pipe to smloops");
			}
			else
			{
				char buffer[256];
				string line = "";
				int solIndex = 0;
				while(!feof(pipe))
				{
					if(fgets(buffer,256,pipe)!=NULL)
					{
						line = buffer;
						//AXIS2_LOG_INFO(env->log,"executing smloops [%s]",buffer);
						if(string::npos!=line.find("Exit"))
						{
							AXIS2_LOG_INFO(env->log,"object value line - [%s]",line.c_str());
							retCode = 1; //infeasible or unbounded
							optValue = 0;
							AXIS2_LOG_INFO(env->log,"problem infeasible or unbounded");
						}
						else if(string::npos!=line.find("x_hold"))
						{
							AXIS2_LOG_INFO(env->log,"solution line - [%s]",line.c_str());
							int start = line.find("Value")+6;
							int end = line.find("Reduced");
							string value = line.substr(start,end-start);
							AXIS2_LOG_INFO(env->log,"value - [%s]",value.c_str());
							double x_val = atof(value.c_str());
							solutions[solIndex] = x_val;
							solIndex++;
							AXIS2_LOG_INFO(env->log,"setting optValue to [%f]",optValue);
						}
						else if(string::npos!=line.find("Opt Sol"))
						{
							AXIS2_LOG_INFO(env->log,"object value line - [%s]",line.c_str());
							retCode = 0; //opt value found.
							string value = line.substr(8,line.find(" ",9));
							optValue = atof(value.c_str());
							AXIS2_LOG_INFO(env->log,"value - [%s]",value.c_str());
							AXIS2_LOG_INFO(env->log,"setting optValue to [%f]",optValue);
						}
						else
						{
							//AXIS2_LOG_INFO(env->log,"other line skip [%s]",line.c_str());
						}
					}
				}
			}

			AXIS2_LOG_INFO(env->log,"Before return executeSMLOOPS ");
			return retCode;
		}

		int calculateOptimizedPortfolioSSD(axutil_array_list_t* symbols,axis2_char_t* benchmark,
				axutil_date_time_t* start,axutil_date_time_t* end,const axutil_env_t* env,double solutions[],double& optValue)
		{
			int syear = axutil_date_time_get_year(start,env);
			int smonth = axutil_date_time_get_month(start,env);
			int sdate = axutil_date_time_get_date(start,env);
			int eyear = axutil_date_time_get_year(end,env);
			int emonth = axutil_date_time_get_month(end,env);
			int edate = axutil_date_time_get_date(end,env);
			int numSymbols = axutil_array_list_size(symbols,env);
			AlmDataWriter* writer = new AlmDataWriter();
			ostringstream oss(ostringstream::out);
			for(int i=0;i<numSymbols;i++)
			{
				axis2_char_t* symbol = (axis2_char_t*)axutil_array_list_get(symbols,env,i);
				oss<<"http://www.google.com/finance/historical?q=";
				oss<<symbol<<"&startdate=";
				oss<<GlobalVariables::m_months[smonth]<<"+"<<sdate<<"%2C+"<<syear<<"&enddate=";
				oss<<GlobalVariables::m_months[emonth]<<"+"<<edate<<"%2C+"<<eyear<<"&histperiod=weekly&num=30&output=csv";
				AXIS2_LOG_INFO(env->log,"retrieving data from [%s]",oss.str().c_str());
				string url = oss.str();
				oss.str("");
				vector<double> returns;
				DataRetriever::getReturnDataVector(url,returns);
				string stock = symbol;
				writer->addReturnData(stock,returns);
			}

//			oss<<"http://www.google.com/finance/historical?q=";
//			oss<<benchmark<<"&startdate=";
//			oss<<GlobalVariables::m_months[smonth]<<"+"<<sdate<<"%2C+"<<syear<<"&enddate=";
//			oss<<GlobalVariables::m_months[emonth]<<"+"<<edate<<"%2C+"<<eyear<<"&histperiod=weekly&num=30&output=csv";

			oss<<"http://ichart.finance.yahoo.com/table.csv?s="<<benchmark;
			oss<<"&a="<<(smonth-1)<<"&b="<<sdate<<"&c="<<syear;
			oss<<"&d="<<(emonth-1)<<"&e="<<edate<<"&f="<<eyear;
			oss<<"&g=w&ingore=.csv";

			AXIS2_LOG_INFO(env->log,"retrieving benchmark data from [%s]",oss.str().c_str());
			string url = oss.str();
			oss.str("");
			vector<double> returns;
			DataRetriever::getReturnDataVector(url,returns);
			string stock = benchmark;
			writer->addBenchmarkReturnData(stock,returns);

			oss<<GlobalVariables::ALM_SSD_MOD<<"_"<<getpid()<<".dat";
			string dataFilename = oss.str();
			oss.str("");
			writer->writeSMLDataFile(dataFilename);
			int retCode = executeSMLOOPS(env,GlobalVariables::ALM_SSD_MOD,dataFilename,solutions,optValue);
			AXIS2_LOG_INFO(env->log,"returned from executeSMLOOPS");

			return retCode;
		}


        /**
         * auto generated function definition signature
         * for "optimizedPortfolioSet|http://uk.ac.ed.maths.org" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _optimizedPortfolioSet of the adb_optimizedPortfolioSetE0_t*
         *
         * @return adb_optimizedPortfolioSetResponse_t*
         */
        adb_optimizePortfolioSSDResponse_t* axis2_skel_Alm_optimizePortfolioSSD(const axutil_env_t *env , axis2_msg_ctx_t *msg_ctx,
                									adb_optimizePortfolioSSD_t* _optimizePortfolioSSD)
        {
			AXIS2_LOG_INFO(env->log,"Logging Request ================[%d]",getpid());
			adb_SymbolSet_t* symbolSet = adb_optimizePortfolioSSD_get_args0(_optimizePortfolioSSD,env);
        	axis2_char_t* benchmark = adb_optimizePortfolioSSD_get_args1(_optimizePortfolioSSD,env);
        	axutil_date_time_t* start = adb_optimizePortfolioSSD_get_args2(_optimizePortfolioSSD,env);
        	axutil_date_time_t* end = adb_optimizePortfolioSSD_get_args3(_optimizePortfolioSSD,env);
			axutil_array_list_t* symbols = adb_SymbolSet_get_symbols(symbolSet,env);

			int numSymbols = axutil_array_list_size(symbols,env);
			AXIS2_LOG_INFO(env->log,"benchmark[%s]",benchmark);

			adb_optimizePortfolioSSD_free(_optimizePortfolioSSD,env);

			int i=0;
			for(i=0;i<numSymbols;i++)
			{
				axis2_char_t* symbol = (axis2_char_t*)axutil_array_list_get(symbols,env,i);
				AXIS2_LOG_INFO(env->log,"symbols[%d]=[%s]",i,symbol);
			}
			AXIS2_LOG_INFO(env->log,"Logging Request DONE ====================");

			double solutions[numSymbols];
			double optValue;
			int retCode = calculateOptimizedPortfolioSSD(symbols,benchmark,start,end,env,solutions,optValue);

			AXIS2_LOG_INFO(env->log,"Setting Response ========================");
			adb_optimizePortfolioSSDResponse_t* ssdResponse = adb_optimizePortfolioSSDResponse_create(env);
			adb_OptimizePortfolioSSDReturn_t*  ssdReturn = adb_OptimizePortfolioSSDReturn_create(env);
			AXIS2_LOG_INFO(env->log,"created ssdresponse and ssdreturn ");
			for(i=0;i<numSymbols;i++)
			{
				adb_OptimizePortfolioSSDReturn_add_protfolioRatio(ssdReturn,env,solutions[i]);
				AXIS2_LOG_INFO(env->log,"solutions[%d]=[%f]",i,solutions[i]);
			}
			adb_OptimizePortfolioSSDReturn_set_resultCode(ssdReturn,env,retCode);
			adb_OptimizePortfolioSSDReturn_set_expReturn(ssdReturn,env,optValue);
			adb_optimizePortfolioSSDResponse_set_return(ssdResponse,env,ssdReturn);
			AXIS2_LOG_INFO(env->log,"Setting Response DONE =====================");
			return ssdResponse;
        }


		//http://www.google.com/finance/historical?cid=287562&startdate=Jan+4%2C+2011&enddate=Feb+8%2C+2012&histperiod=weekly&num=30&output=csv
//		//http://www.google.com/finance/historical?q=NASDAQ:AAPL&startdate=Jan+4%2C+2011&enddate=Feb+8%2C+2012&histperiod=weekly&num=30&output=csv
        //http://ichart.finance.yahoo.com/table.csv?s=%5EIXIC&a=01&b=5&c=1971&d=01&e=16&f=2012&g=w&ignore=.csv
//#ifdef __cplusplus
//}
//#endif
