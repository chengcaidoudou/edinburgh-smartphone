/*
 * Log.h
 *
 *  Created on: Feb 13, 2012
 *      Author: s0965328
 */

#ifndef LOG_H_
#define LOG_H_

#include "GlobalVariables.h"
#include <fstream>
#include <stdarg.h>

using namespace std;
class Log {

private:
	Log();
	virtual ~Log();
	static Log* GetInstance();
	void write(const char* longline);
	static void Write(const char* line,va_list argList);

	ofstream log_stream;

public:
	static void DEBUG(const char* line, ...);
	static void ERROR(const char* line, ...);
	static void INFO(const char* line, ...);
};

#endif /* LOG_H_ */
