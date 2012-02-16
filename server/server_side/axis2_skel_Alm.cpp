

    /**
     * axis2_skel_Alm.c
     *
     * This file was auto-generated from WSDL for "Alm|http://uk.ac.ed.maths.org" service
     * by the Apache Axis2/C version: 1.6.1  Built on : Aug 31, 2011 (12:22:40 CEST)
     * axis2_skel_Alm Axis2/C skeleton for the axisService
     */

     #include "axis2_skel_Alm.h"


#include <string>
#include <sstream>
#include <stdio.h>
#include "GlobalVariables.h"
#include "DataRetriever.h"
#include "AlmDataWriter.h"
#include "alm_service_common.h"
#include "alm_ssd_mod.h"

//#ifdef __cplusplus
//extern "C"
//{
//#endif


		using namespace std;

        /**
         * auto generated function definition signature
         * for "optimizedPortfolioSet|http://uk.ac.ed.maths.org" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _optimizedPortfolioSet of the adb_optimizedPortfolioSetE0_t*
         *
         * @return adb_optimizedPortfolioSetResponse_t*
         */
        adb_optimizePortfolioSSDResponse_t* axis2_skel_Alm_optimizePortfolioSSD(const axutil_env_t *env , axis2_msg_ctx_t *msg_ctx,
                									adb_optimizePortfolioSSD_t* _optimizePortfolioSSD)
        {
			AXIS2_LOG_INFO(env->log,"Logging Request ================[%d]",getpid());
			adb_SymbolSet_t* symbolSet = adb_optimizePortfolioSSD_get_args0(_optimizePortfolioSSD,env);
        	axis2_char_t* benchmark = adb_optimizePortfolioSSD_get_args1(_optimizePortfolioSSD,env);
        	axutil_date_time_t* start = adb_optimizePortfolioSSD_get_args2(_optimizePortfolioSSD,env);
        	axutil_date_time_t* end = adb_optimizePortfolioSSD_get_args3(_optimizePortfolioSSD,env);
			axutil_array_list_t* symbols = adb_SymbolSet_get_symbols(symbolSet,env);

			int numSymbols = axutil_array_list_size(symbols,env);
			AXIS2_LOG_INFO(env->log,"benchmark[%s]",benchmark);
			adb_optimizePortfolioSSD_free(_optimizePortfolioSSD,env);
			for(int i=0;i<numSymbols;i++)
			{
				axis2_char_t* symbol = (axis2_char_t*)axutil_array_list_get(symbols,env,i);
				AXIS2_LOG_INFO(env->log,"symbols[%d]=[%s]",i,symbol);
			}
			AXIS2_LOG_INFO(env->log,"Logging Request DONE ====================");

			double solutions[numSymbols];
			double optValue;
			int retCode = calculateOptimizedPortfolioSSD(symbols,benchmark,start,end,env,solutions,optValue);

			AXIS2_LOG_INFO(env->log,"Setting Response ========================");
			adb_optimizePortfolioSSDResponse_t* ssdResponse = adb_optimizePortfolioSSDResponse_create(env);
			adb_OptimizePortfolioSSDReturn_t*  ssdReturn = adb_OptimizePortfolioSSDReturn_create(env);
			AXIS2_LOG_INFO(env->log,"created ssdresponse and ssdreturn ");
			for(int i=0;i<numSymbols;i++)
			{
				adb_OptimizePortfolioSSDReturn_add_protfolioRatio(ssdReturn,env,solutions[i]);
				AXIS2_LOG_INFO(env->log,"solutions[%d]=[%f]",i,solutions[i]);
			}
			adb_OptimizePortfolioSSDReturn_set_resultCode(ssdReturn,env,retCode);
			adb_OptimizePortfolioSSDReturn_set_expReturn(ssdReturn,env,optValue);
			adb_optimizePortfolioSSDResponse_set_return(ssdResponse,env,ssdReturn);
			AXIS2_LOG_INFO(env->log,"Setting Response DONE =====================");
			return ssdResponse;
        }

//#ifdef __cplusplus
//}
//#endif
