/*
 * AlmDataWriter.cpp
 *
 *  Created on: Feb 13, 2012
 *      Author: s0965328
 */

#include "AlmDataWriter.h"
#include "Log.h"
#include "ProbabilityPolicy.h"
#include <vector>
#include <algorithm>

using namespace std;
AlmDataWriter::AlmDataWriter() {
	this->symbols.clear();
	this->returnsList.clear();
	this->probs.clear();;
	this->benchmark = "";
	this->bReturnsOrignal.clear();;
	this->bReturnsNoDup.clear();;
	this->bhReturns.clear();;
	this->numNodes = 0;
}

AlmDataWriter::~AlmDataWriter() {
	// TODO Auto-generated destructor stub
}

int AlmDataWriter::addReturnData(string symbol,vector<double> returns)
{
	int retCode = 0;
	this->symbols.push_back(symbol);
	this->returnsList.push_back(returns);
	if((!this->returnsList.empty()) && returns.size()!=this->returnsList.front().size())
	{
		retCode = 3;
		Log::ERROR("-- - symbols return data doesn't match .....");
	}
	return retCode;
}
int AlmDataWriter::addBenchmarkReturnData(string symbol,vector<double> returns)
{
	int retCode = 0;
	this->benchmark = symbol;
	this->bReturnsOrignal = returns;
	if(this->returnsList.front().size()!=returns.size())
	{
		retCode = 3;
		Log::ERROR("-- - benchmark return data doesn't match .....");
	}
	return retCode;
}

void AlmDataWriter::setoReturnRatio(double ratio)
{
	this->returnRatio = ratio;
}

void AlmDataWriter::calculateHBenchMark()
{
	this->bReturnsNoDup = this->bReturnsOrignal;
	Log::DEBUG("benchmark returns - size[%d] before remove duplicate.",this->bReturnsNoDup.size());
	std::sort(this->bReturnsNoDup.begin(),this->bReturnsNoDup.end());
	this->bReturnsNoDup.erase(unique(this->bReturnsNoDup.begin(),this->bReturnsNoDup.end()),this->bReturnsNoDup.end());
	Log::DEBUG("benchmark returns - size[%d] after remove duplicate.",this->bReturnsNoDup.size());

	vector<double>::iterator curr = this->bReturnsNoDup.begin();
	for(;curr!=this->bReturnsNoDup.end();curr++)
	{
		double sum = 0;
		vector<double>::iterator it = this->bReturnsOrignal.begin();
		vector<double>::iterator it_probs = this->probs.begin();
		for(;it!=this->bReturnsOrignal.end();it++,it_probs++)
		{
			double diff = (*curr)-(*it);
			double prob = *it_probs;
			sum += diff>0?diff*prob:0;
		}
		this->bhReturns.push_back(sum);
	}
	Log::DEBUG("bReturnsNoDup [%d] == bhReturns [%d]",this->bReturnsNoDup.size(),this->bhReturns.size());

}

void AlmDataWriter::writeSMLDataFileSSD(string filename)
{
	this->calcNumNodes();
	this->calculateProbobility();
	this->calculateHBenchMark();
	string abs_filename = GlobalVariables::ALM_SERVICE_HOME+filename;
	Log::DEBUG("writing sml data file to [%s]",abs_filename.c_str());
	ofstream dataStream(abs_filename.c_str());

	this->writeT(dataStream);
	this->writeNodes(dataStream);
	this->writeParent(dataStream);
	this->writeProbs(dataStream);
	this->writeAsset(dataStream);
	this->writeReturn(dataStream);
	this->writeBenchmark(dataStream);
	dataStream.close();
	Log::DEBUG("LOG file data file [%s]",abs_filename.c_str());
}

void AlmDataWriter::writeSMLDataFileMAD(string filename)
{
	this->calcNumNodes();
	this->calculateProbobility();
	string abs_filename = GlobalVariables::ALM_SERVICE_HOME+filename;
	Log::DEBUG("writing sml data file to [%s]",abs_filename.c_str());
	ofstream dataStream(abs_filename.c_str());
	this->writeT(dataStream);
	this->writeReturnRatio(dataStream);
	this->writeNodes(dataStream);
	this->writeParent(dataStream);
	this->writeProbs(dataStream);
	this->writeAsset(dataStream);
	this->writeReturn(dataStream);
	dataStream.close();
	Log::DEBUG("LOG file data file [%s]",abs_filename.c_str());
}

void AlmDataWriter::writeT(ofstream& dataStream)
{
	dataStream<<"param T := 1;"<<endl;
}
void AlmDataWriter::writeReturnRatio(ofstream& dataStream)
{
	dataStream<<"param ReturnRatio := "<<this->returnRatio<<";"<<endl;
}
void AlmDataWriter::writeNodes(ofstream& dataStream)
{
	dataStream<<"set NODES := ";
	for(int i=1;i<=this->numNodes;i++)
	{
		dataStream<<i<<" ";
	}
	dataStream<<";"<<endl;
}
void AlmDataWriter::writeParent(ofstream& dataStream)
{
	dataStream<<"param: Parent := 1 \"null\""<<endl;
	for(int i=2;i<=this->numNodes;i++)
	{
		dataStream<<"\t\t\t"<<i<<" "<<"1"<<endl;
	}
	dataStream<<"\t\t\t"<<";"<<endl;
}
void AlmDataWriter::writeProbs(ofstream& dataStream)
{
	dataStream<<"param: Probs := 1  1"<<endl;
	for(int i=2;i<=this->numNodes;i++)
	{
		dataStream<<"\t\t\t"<<i<<" "<<probs.at(i-2)<<endl;
	}
	dataStream<<"\t\t\t;"<<endl;
}
void AlmDataWriter::writeAsset(ofstream& dataStream)
{
	dataStream<<"set ASSETS := ";
	for(vector<string>::iterator it=this->symbols.begin();it!=this->symbols.end();it++)
	{
		dataStream<<(*it)<<" ";
	}
	dataStream<<";"<<endl;
}
void AlmDataWriter::writeReturn(ofstream& dataStream)
{
	dataStream<<"param: Return := "<<endl;
	vector<string>::iterator it_sname = this->symbols.begin();
	vector<vector<double> >::iterator it_returns = this->returnsList.begin();
	for(;it_sname!=this->symbols.end();it_sname++)
	{
		string sname = *it_sname;
		vector<double>::iterator it_ret = (*it_returns).begin();
		dataStream<<"\t\t\t"<<sname<<"\t"<<"1"<<"\t"<<"0"<<endl;
		int nodeIndex = 2;
		for(;it_ret!=(*it_returns).end();it_ret++)
		{
			double ret = *it_ret;
			dataStream<<"\t\t\t"<<sname<<"\t"<<nodeIndex<<"\t"<<ret<<endl;
			nodeIndex++;
		}
		it_returns++;
	}
	dataStream<<"\t\t\t"<<";"<<endl;
}

void AlmDataWriter::writeBenchmark(ofstream& dataStream)
{
	dataStream<<"set BENCHMARK := ";
	for(int i=1;i<=this->bReturnsNoDup.size();i++)
	{
		dataStream<<"b"<<i<<" ";
	}
	dataStream<<"\t\t\t"<<";"<<endl;

	dataStream<<"param: VBenchmk:="<<endl;
	int benmkIndex = 1;
	for(vector<double>::iterator it=this->bReturnsNoDup.begin();it!=this->bReturnsNoDup.end();it++)
	{
		dataStream<<"\t\t\t"<<"b"<<benmkIndex<<"\t"<<*it<<endl;
		benmkIndex++;
	}
	dataStream<<"\t\t\t"<<";"<<endl;
	dataStream<<"param: HBenchmk:="<<endl;
	benmkIndex = 1;
	for(vector<double>::iterator it=this->bhReturns.begin();it!=this->bhReturns.end();it++)
	{
		dataStream<<"\t\t\t"<<"b"<<benmkIndex<<"\t"<<*it<<endl;
		benmkIndex++;
	}
	dataStream<<"\t\t\t"<<";"<<endl;
}

void AlmDataWriter::calculateProbobility()
{
	ProbabilityPolicy::getEquallyLikelyProbabilityVector(this->numNodes-1,probs);
	if(this->returnsList.front().size()!=probs.size())
	{
		Log::ERROR("-- - probability vector size doesn't match number of scenarios.....");
	}
}

void AlmDataWriter::calcNumNodes()
{
	this->numNodes = this->returnsList.front().size() + 1;
	Log::DEBUG("number of nodes is [%d]",this->numNodes);
}
