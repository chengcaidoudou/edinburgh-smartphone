/*
 * ProbabilityPolicy.h
 *
 *  Created on: Feb 13, 2012
 *      Author: s0965328
 */

#ifndef PROBABILITYPOLICY_H_
#define PROBABILITYPOLICY_H_

#include <vector>

using namespace std;

class ProbabilityPolicy {
public:
	int numScenario;

	ProbabilityPolicy(int numOfScenario);
	virtual ~ProbabilityPolicy();
	static void getEquallyLikelyProbabilityVector(int numScenario,vector<double>& probs);
};

#endif /* PROBABILITYPOLICY_H_ */
