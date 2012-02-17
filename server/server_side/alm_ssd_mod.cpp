/*
 * alm_ssd_mod.c
 *
 *  Created on: Feb 16, 2012
 *      Author: s0965328
 */

#include "alm_ssd_mod.h"
#include <string>
#include <sstream>
#include <stdio.h>
#include "GlobalVariables.h"
#include "DataRetriever.h"
#include "AlmDataWriter.h"
#include "alm_service_common.h"

int calculateOptimizedPortfolioSSD(const axutil_env_t* env,axutil_array_list_t* symbols,axis2_char_t* benchmark,axutil_date_time_t* start,axutil_date_time_t* end,
				double solutions[],double& optValue)
{
	int numSymbols = axutil_array_list_size(symbols,env);
	ostringstream oss(ostringstream::out);
	AlmDataWriter* writer = new AlmDataWriter();
	for(int i=0;i<numSymbols;i++)
	{
		axis2_char_t* symbol = (axis2_char_t*)axutil_array_list_get(symbols,env,i);
		buildURLGoogle(env,symbol,start,end,oss);
		string url = oss.str();
		//oss.str("");
		vector<double> returns;
		AXIS2_LOG_INFO(env->log,"retrieving data from [%s]",url.c_str());
		DataRetriever::getReturnDataVector(url,returns);
		string stock = symbol;
		writer->addReturnData(stock,returns);
	}
	buildURLYahoo(env,benchmark,start,end,oss);

	string url = oss.str();
	oss.str("");
	AXIS2_LOG_INFO(env->log,"retrieving benchmark data from [%s]",url.c_str());
	vector<double> returns;
	DataRetriever::getReturnDataVector(url,returns);
	string stock = benchmark;
	writer->addBenchmarkReturnData(stock,returns);

	oss<<GlobalVariables::ALM_SSD_MOD<<"_"<<getpid()<<".dat";
	string dataFilename = oss.str();
	oss.str("");
	writer->writeSMLDataFileSSD(dataFilename);
	double nouse = -1;
	int retCode = executeSMLOOPS(env,GlobalVariables::ALM_SSD_MOD,dataFilename,solutions,optValue,nouse);
	AXIS2_LOG_INFO(env->log,"returned from executeSMLOOPS");

	return retCode;
}
