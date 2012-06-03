/*
 * alm_mad_mod.cpp
 *
 *  Created on: Feb 17, 2012
 *      Author: s0965328
 */

#include "alm_mad_mod.h"
#include <string>
#include <sstream>
#include <stdio.h>
#include "GlobalVariables.h"
#include "DataRetriever.h"
#include "AlmDataWriter.h"
#include "alm_service_common.h"

int calculateOptimizedPortfolioMAD(const axutil_env_t* env,axutil_array_list_t* symbols,double returnRatio,axutil_date_time_t* start,axutil_date_time_t* end,
		double solutions[],double& expReturn,double& optValue)
{
	int retCode = 0;
	int numSymbols = axutil_array_list_size(symbols,env);
	ostringstream oss(ostringstream::out);
	AlmDataWriter* writer = new AlmDataWriter();
	for(int i=0;i<numSymbols;i++)
	{
		axis2_char_t* symbol = (axis2_char_t*)axutil_array_list_get(symbols,env,i);
		buildURLYahoo(env,symbol,start,end,oss);
		string url = oss.str();
		vector<double> returns;
		AXIS2_LOG_INFO(env->log,"retrieving data from [%s]",url.c_str());
		DataRetriever::getReturnDataVector(url,returns);
		string stock = symbol;
		retCode = writer->addReturnData(stock,returns);
	}

	oss.str("");
	oss<<GlobalVariables::ALM_MAD_MOD<<"_"<<getpid()<<".dat";
	string dataFilename = oss.str();
	oss.str("");
	writer->setoReturnRatio(returnRatio);
	writer->writeSMLDataFileMAD(dataFilename);

	if(retCode == 0)
	{
		retCode = executeSMLOOPS(env,GlobalVariables::ALM_MAD_MOD,dataFilename,solutions,optValue,expReturn);
		AXIS2_LOG_INFO(env->log,"returned from executeSMLOOPS");
	}
	else
	{
		AXIS2_LOG_INFO(env->log,"error happens -- not calling oops anymore...");
	}

	return retCode;
}
