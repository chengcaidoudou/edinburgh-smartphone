/*
 * Log.cpp
 *
 *  Created on: Feb 13, 2012
 *      Author: s0965328
 */

#include "Log.h"
#include <fstream>
#include <string.h>

Log::Log() {
	log_stream.open(GlobalVariables::ALM_SERVICE_LOG_FILE.c_str(),fstream::app);
}

Log* Log::GetInstance()
{
	if(GlobalVariables::logger == NULL)
	{
		GlobalVariables::logger = new Log();
	}
	return GlobalVariables::logger;
}

Log::~Log() {
	log_stream.close();
}

void Log::write(const char* longline)
{

	log_stream << longline << endl;
}

void Log::Write(const char* line, va_list argList)
{
	char cbuffer[1024];
	vsnprintf(cbuffer, 1024,line, argList);
	Log::GetInstance()->write(cbuffer);
}

void Log::INFO(const char* line, ...)
{
	va_list argList;
	char cbuffer[1024];
	va_start(argList, line);
	strcpy(cbuffer,"[INFO] ");
	strcat(cbuffer,line);
	va_end(argList);
	Log::GetInstance()->Write(cbuffer,argList);
}
void Log::DEBUG(const char* line, ...)
{
	va_list argList;
	char cbuffer[1024];
	va_start(argList, line);
	strcpy(cbuffer,"[DEBUG] ");
	strcat(cbuffer,line);
	va_end(argList);
	Log::GetInstance()->Write(cbuffer,argList);
}

void Log::ERROR(const char* line, ...)
{
	va_list argList;
	char cbuffer[1024];
	va_start(argList, line);
	strcpy(cbuffer,"[ERROR] ");
	strcat(cbuffer,line);
	va_end(argList);
	Log::GetInstance()->Write(cbuffer,argList);
}
