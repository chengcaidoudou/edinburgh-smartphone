/*
 * ProbabilityPolicy.cpp
 *
 *  Created on: Feb 13, 2012
 *      Author: s0965328
 */

#include "ProbabilityPolicy.h"
#include "Log.h"

ProbabilityPolicy::ProbabilityPolicy(int numOfScenario):numScenario(numOfScenario) {

}

ProbabilityPolicy::~ProbabilityPolicy() {

}

void ProbabilityPolicy::getEquallyLikelyProbabilityVector(int numScenario,vector<double>& probs)
{
	double prob = 1.0/(double)numScenario;
	for(int i=0;i<numScenario;i++)
	{
		probs.push_back(prob);
	}
	Log::DEBUG("generate euallylikely probablility vector --p[%f]",prob);
}
