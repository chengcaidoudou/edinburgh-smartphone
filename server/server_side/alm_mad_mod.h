/*
 * alm_mad_mod.h
 *
 *  Created on: Feb 17, 2012
 *      Author: s0965328
 */

#ifndef ALM_MAD_MOD_H_
#define ALM_MAD_MOD_H_

#include "axis2_skel_Alm.h"

int calculateOptimizedPortfolioMAD(const axutil_env_t* env,axutil_array_list_t* symbols,double returnRatio,axutil_date_time_t* start,axutil_date_time_t* end,
		double solutions[],double& expReturn,double& optValue);

#endif /* ALM_MAD_MOD_H_ */
