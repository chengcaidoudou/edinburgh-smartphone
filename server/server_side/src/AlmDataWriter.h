/*
 * AlmDataWriter.h
 *
 *  Created on: Feb 13, 2012
 *      Author: s0965328
 */

#ifndef ALMDATAWRITER_H_
#define ALMDATAWRITER_H_

#include <vector>
#include <string>

using namespace std;

class AlmDataWriter {
public:
	AlmDataWriter();
	virtual ~AlmDataWriter();

	void addReturnData(string symbol,vector<double> returns);
	void addBenchmarkReturnData(string symbol,vector<double> returns);
	void writeSMLDataFile(string filename);

private:
	vector<string> symbols;
	vector<vector<double> > returnsList;
	vector<double> probs;
	string benchmark;
	vector<double> bReturnsOrignal;
	vector<double> bReturnsNoDup;
	vector<double> bhReturns;
	int numNodes;

	void prepareDataToWrite();
	void calculateHBenchMark();
};

#endif /* ALMDATAWRITER_H_ */
