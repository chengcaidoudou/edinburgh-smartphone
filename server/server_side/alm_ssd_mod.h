/*
 * alm_ssd_mod.h
 *
 *  Created on: Feb 16, 2012
 *      Author: s0965328
 */

#ifndef ALM_SSD_MOD_H_
#define ALM_SSD_MOD_H_

#include "axis2_skel_Alm.h"

int calculateOptimizedPortfolioSSD(const axutil_env_t* env,axutil_array_list_t* symbols,axis2_char_t* benchmark,axutil_date_time_t* start,axutil_date_time_t* end,
				double solutions[],double& optValue);

#endif /* ALM_SSD_MOD_H_ */
