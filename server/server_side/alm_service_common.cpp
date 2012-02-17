/*
 * alm_service_common.c
 *
 *  Created on: Feb 16, 2012
 *      Author: s0965328
 */

#include <sstream>
#include <stdio.h>
#include "alm_service_common.h"
#include "GlobalVariables.h"
#include "DataRetriever.h"
#include "AlmDataWriter.h"

int executeSMLOOPS(const axutil_env_t* env,string modFilename,string dataFilename,double solutions[],double& optValue, double& expReturn)
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
				else if(string::npos!=line.find("root_E"))
				{
					AXIS2_LOG_INFO(env->log,"expected return line - [%s]",line.c_str());
					int start = line.find("Value")+6;
					int end = line.find("Reduced");
					string value = line.substr(start,end-start);
					AXIS2_LOG_INFO(env->log,"value - [%s]",value.c_str());
					expReturn = atof(value.c_str());
					AXIS2_LOG_INFO(env->log,"setting expReturn to [%f]",expReturn);
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

void buildURLGoogle(const axutil_env_t* env,axis2_char_t* symbol,axutil_date_time_t* start, axutil_date_time_t* end,ostringstream& oss)
{
	int syear = axutil_date_time_get_year(start,env);
	int smonth = axutil_date_time_get_month(start,env);
	int sdate = axutil_date_time_get_date(start,env);
	int eyear = axutil_date_time_get_year(end,env);
	int emonth = axutil_date_time_get_month(end,env);
	int edate = axutil_date_time_get_date(end,env);
	oss.str("");
	oss<<"http://www.google.com/finance/historical?q=";
	oss<<symbol<<"&startdate=";
	oss<<GlobalVariables::m_months[smonth]<<"+"<<sdate<<"%2C+"<<syear<<"&enddate=";
	oss<<GlobalVariables::m_months[emonth]<<"+"<<edate<<"%2C+"<<eyear<<"&histperiod=weekly&num=30&output=csv";
	AXIS2_LOG_INFO(env->log,"build url google version [%s]",oss.str().c_str());
}

void buildURLYahoo(const axutil_env_t* env,axis2_char_t* symbol,axutil_date_time_t* start, axutil_date_time_t* end,ostringstream& oss)
{
	int syear = axutil_date_time_get_year(start,env);
	int smonth = axutil_date_time_get_month(start,env);
	int sdate = axutil_date_time_get_date(start,env);
	int eyear = axutil_date_time_get_year(end,env);
	int emonth = axutil_date_time_get_month(end,env);
	int edate = axutil_date_time_get_date(end,env);
	oss.str("");
	oss<<"http://ichart.finance.yahoo.com/table.csv?s="<<symbol;
	oss<<"&a="<<(smonth-1)<<"&b="<<sdate<<"&c="<<syear;
	oss<<"&d="<<(emonth-1)<<"&e="<<edate<<"&f="<<eyear;
	oss<<"&g=w&ingore=.csv";

}

