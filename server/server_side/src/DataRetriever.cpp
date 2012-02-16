/*
 * DataRetrieve.cpp
 *
 *  Created on: Feb 13, 2012
 *      Author: s0965328
 */

#include "DataRetriever.h"
#include <sstream>
#include <stdlib.h>
#include "Log.h"
#include "/usr/include/curl/curl.h"
#include "/usr/include/curl/easy.h"

DataRetriever::DataRetriever() {


}

DataRetriever::~DataRetriever() {

}

int writer(char *data, size_t size, size_t nmemb, string *buffer)
{
	int result = 0;
	if(buffer != NULL) {
		buffer->append(data,size*nmemb);
		result = size * nmemb;
	}
	return result;
}


void DataRetriever::getReturnDataVector(string url,vector<double>& returns)
{
	try{
	Log::DEBUG("retrieve data at [%s] ",url.c_str());
	CURL *curl;
	curl = curl_easy_init();
	string buffer;
	if(curl){
		curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
		curl_easy_setopt(curl, CURLOPT_HEADER, 0);	 /* No we don't need the Header of the web content. Set to 0 and curl ignores the first line */
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 0); /* Don't follow anything else than the particular url requested*/
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writer);	/* Function Pointer "writer" manages the required buffer size */
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer ); /* Data Pointer &buffer stores downloaded web content */
	}
	else
	{
		Log::ERROR("CURL:: ERROR -- possible error with google communication");
	}
	curl_easy_perform(curl);
	curl_easy_cleanup(curl);

	istringstream iss(buffer);
	string line;
	getline(iss,line); //disregard the fist line - column name
	Log::DEBUG("%s -------- first line",line.c_str());
	while(getline(iss,line))
	{
		Log::DEBUG("%s ",line.c_str());
		istringstream linestream(line);

		string item;
		double openPrice;
		double closePrice;
		double ret;
		int index = 0;
		while(getline(linestream,item,','))
		{
			if(index==1)
			{
				openPrice = atof(item.c_str());
			}
			else if(index==4)
			{
				closePrice = atof(item.c_str());
			}
			index++;
		}
		ret = closePrice/openPrice;
		Log::DEBUG("Open[%f] Close[%f] Add Ret[%f]",openPrice,closePrice,ret);
		returns.push_back(ret);
	}
	}
	catch (exception& e)
	{
		Log::DEBUG("Exception -- %s",e.what());
	}

}
