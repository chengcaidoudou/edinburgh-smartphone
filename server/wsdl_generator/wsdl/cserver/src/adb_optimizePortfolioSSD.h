

        #ifndef ADB_OPTIMIZEPORTFOLIOSSD_H
        #define ADB_OPTIMIZEPORTFOLIOSSD_H

       /**
        * adb_optimizePortfolioSSD.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.1  Built on : Aug 31, 2011 (12:23:23 CEST)
        */

       /**
        *  adb_optimizePortfolioSSD class
        */

        
          #include "adb_SymbolSet.h"
          
            #include <axutil_date_time.h>
          

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_optimizePortfolioSSD adb_optimizePortfolioSSD_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_optimizePortfolioSSD_t
         * @param env pointer to environment struct
         * @return newly created adb_optimizePortfolioSSD_t object
         */
        adb_optimizePortfolioSSD_t* AXIS2_CALL
        adb_optimizePortfolioSSD_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_free (
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        /**
         * Free adb_optimizePortfolioSSD_t object
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_free_obj (
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for args0. 
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return adb_SymbolSet_t*
         */
        adb_SymbolSet_t* AXIS2_CALL
        adb_optimizePortfolioSSD_get_args0(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        /**
         * Setter for args0.
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param arg_args0 adb_SymbolSet_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_set_args0(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env,
            adb_SymbolSet_t*  arg_args0);

        /**
         * Resetter for args0
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_reset_args0(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        
        

        /**
         * Getter for args1. 
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_optimizePortfolioSSD_get_args1(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        /**
         * Setter for args1.
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param arg_args1 axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_set_args1(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env,
            const axis2_char_t*  arg_args1);

        /**
         * Resetter for args1
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_reset_args1(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        
        

        /**
         * Getter for args2. 
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_optimizePortfolioSSD_get_args2(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        /**
         * Setter for args2.
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param arg_args2 axutil_date_time_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_set_args2(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env,
            axutil_date_time_t*  arg_args2);

        /**
         * Resetter for args2
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_reset_args2(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        
        

        /**
         * Getter for args3. 
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_optimizePortfolioSSD_get_args3(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        /**
         * Setter for args3.
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param arg_args3 axutil_date_time_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_set_args3(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env,
            axutil_date_time_t*  arg_args3);

        /**
         * Resetter for args3
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_reset_args3(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether args0 is nill
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_optimizePortfolioSSD_is_args0_nil(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env);


        
        /**
         * Set args0 to nill (currently the same as reset)
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_set_args0_nil(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env);
        

        /**
         * Check whether args1 is nill
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_optimizePortfolioSSD_is_args1_nil(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env);


        
        /**
         * Set args1 to nill (currently the same as reset)
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_set_args1_nil(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env);
        

        /**
         * Check whether args2 is nill
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_optimizePortfolioSSD_is_args2_nil(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env);


        
        /**
         * Set args2 to nill (currently the same as reset)
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_set_args2_nil(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env);
        

        /**
         * Check whether args3 is nill
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_optimizePortfolioSSD_is_args3_nil(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env);


        
        /**
         * Set args3 to nill (currently the same as reset)
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_set_args3_nil(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_deserialize(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_deserialize_obj(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_optimizePortfolioSSD_declare_parent_namespaces(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param optimizePortfolioSSD_om_node node to serialize from
         * @param optimizePortfolioSSD_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_optimizePortfolioSSD_serialize(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env,
            axiom_node_t* optimizePortfolioSSD_om_node, axiom_element_t *optimizePortfolioSSD_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @param optimizePortfolioSSD_om_node node to serialize from
         * @param optimizePortfolioSSD_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_optimizePortfolioSSD_serialize_obj(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env,
            axiom_node_t* optimizePortfolioSSD_om_node, axiom_element_t *optimizePortfolioSSD_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_optimizePortfolioSSD is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_optimizePortfolioSSD_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_optimizePortfolioSSD_t
         * @param env pointer to environment struct
         * @param _args0 adb_SymbolSet_t*
         * @param _args1 axis2_char_t*
         * @param _args2 axutil_date_time_t*
         * @param _args3 axutil_date_time_t*
         * @return newly created adb_optimizePortfolioSSD_t object
         */
        adb_optimizePortfolioSSD_t* AXIS2_CALL
        adb_optimizePortfolioSSD_create_with_values(
            const axutil_env_t *env,
                adb_SymbolSet_t* _args0,
                axis2_char_t* _args1,
                axutil_date_time_t* _args2,
                axutil_date_time_t* _args3);

        


                /**
                 * Free adb_optimizePortfolioSSD_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_SymbolSet_t* AXIS2_CALL
                adb_optimizePortfolioSSD_free_popping_value(
                        adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for args0 by property number (1)
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return adb_SymbolSet_t*
         */
        adb_SymbolSet_t* AXIS2_CALL
        adb_optimizePortfolioSSD_get_property1(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

    
        

        /**
         * Getter for args1 by property number (2)
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_optimizePortfolioSSD_get_property2(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

    
        

        /**
         * Getter for args2 by property number (3)
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_optimizePortfolioSSD_get_property3(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

    
        

        /**
         * Getter for args3 by property number (4)
         * @param  _optimizePortfolioSSD adb_optimizePortfolioSSD_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_optimizePortfolioSSD_get_property4(
            adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_OPTIMIZEPORTFOLIOSSD_H */
    

