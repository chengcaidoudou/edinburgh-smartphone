/*
 * alm_service_common.h
 *
 *  Created on: Feb 16, 2012
 *      Author: s0965328
 */

#ifndef ALM_SERVICE_COMMON_H_
#define ALM_SERVICE_COMMON_H_

#include "axis2_skel_Alm.h"
#include <string>

using namespace std;

int executeSMLOOPS(const axutil_env_t* env,string modFilename,string dataFilename,double solutions[],double& optValue,double& expReturn);
void buildURLGoogle(const axutil_env_t* env,axis2_char_t* symbol,axutil_date_time_t* start, axutil_date_time_t* end,ostringstream& oss);
void buildURLYahoo(const axutil_env_t* env,axis2_char_t* symbol,axutil_date_time_t* start, axutil_date_time_t* end,ostringstream& oss);

#endif /* ALM_SERVICE_COMMON_H_ */



//http://www.google.com/finance/historical?cid=287562&startdate=Jan+4%2C+2011&enddate=Feb+8%2C+2012&histperiod=weekly&num=30&output=csv
//http://www.google.com/finance/historical?q=NASDAQ:AAPL&startdate=Jan+4%2C+2011&enddate=Feb+8%2C+2012&histperiod=weekly&num=30&output=csv
//http://ichart.finance.yahoo.com/table.csv?s=%5EIXIC&a=01&b=5&c=1971&d=01&e=16&f=2012&g=w&ignore=.csv
