#ifndef AXIS2_SKEL_ALM_H_
#define AXIS2_SKEL_ALM_H_

    /**
     * axis2_skel_Alm.h
     *
     * This file was auto-generated from WSDL for "Alm|http://uk.ac.ed.maths.org" service
     * by the Apache Axis2/C version: 1.6.1  Built on : Aug 31, 2011 (12:22:40 CEST)
     * axis2_skel_Alm Axis2/C skeleton for the axisService- Header file
     */


	#include <axis2_svc_skeleton.h>
	#include <axutil_log_default.h>
	#include <axutil_error_default.h>
    #include <axutil_error.h>
	#include <axiom_text.h>
	#include <axiom_node.h>
	#include <axiom_element.h>
    #include <stdio.h>


   
     #include "adb_optimizePortfolioSSD.h"
    
     #include "adb_optimizePortfolioSSDResponse.h"
    
     #include "adb_optimizePortfolioMAD.h"
    
     #include "adb_optimizePortfolioMADResponse.h"
    

	#ifdef __cplusplus
	extern "C" {
	#endif

     

		 
        /**
         * auto generated function declaration
         * for "optimizePortfolioSSD|http://uk.ac.ed.maths.org" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _optimizePortfolioSSD of the adb_optimizePortfolioSSD_t*
         *
         * @return adb_optimizePortfolioSSDResponse_t*
         */
        adb_optimizePortfolioSSDResponse_t* axis2_skel_Alm_optimizePortfolioSSD(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_optimizePortfolioSSD_t* _optimizePortfolioSSD);


     

		 
        /**
         * auto generated function declaration
         * for "optimizePortfolioMAD|http://uk.ac.ed.maths.org" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _optimizePortfolioMAD of the adb_optimizePortfolioMAD_t*
         *
         * @return adb_optimizePortfolioMADResponse_t*
         */
        adb_optimizePortfolioMADResponse_t* axis2_skel_Alm_optimizePortfolioMAD(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_optimizePortfolioMAD_t* _optimizePortfolioMAD);


     

    /** we have to reserve some error codes for adb and for custom messages */
    #define AXIS2_SKEL_ALM_ERROR_CODES_START (AXIS2_ERROR_LAST + 2500)

    typedef enum 
    {
        AXIS2_SKEL_ALM_ERROR_NONE = AXIS2_SKEL_ALM_ERROR_CODES_START,
        
        AXIS2_SKEL_ALM_ERROR_LAST
    } axis2_skel_Alm_error_codes;

	#ifdef __cplusplus
	}
	#endif
    

#endif /* AXIS2_SKEL_ALM_H_ */
