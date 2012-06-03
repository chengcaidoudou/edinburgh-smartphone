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

	int addReturnData(string symbol,vector<double> returns);
	int addBenchmarkReturnData(string symbol,vector<double> returns);
	void setoReturnRatio(double ratio);
	void writeSMLDataFileSSD(string filename);
	void writeSMLDataFileMAD(string filename);

private:
	vector<string> symbols;
	vector<vector<double> > returnsList;
	vector<double> probs;
	string benchmark;
	vector<double> bReturnsOrignal;
	vector<double> bReturnsNoDup;
	vector<double> bhReturns;
	int numNodes;
	double returnRatio;

	void calculateHBenchMark();
	void writeT(ofstream&);
	void writeReturnRatio(ofstream&);
	void writeNodes(ofstream&);
	void writeParent(ofstream&);
	void writeProbs(ofstream&);
	void writeAsset(ofstream&);
	void writeReturn(ofstream&);
	void writeBenchmark(ofstream&);
	void calculateProbobility();
	void calcNumNodes();
};

#endif /* ALMDATAWRITER_H_ */
