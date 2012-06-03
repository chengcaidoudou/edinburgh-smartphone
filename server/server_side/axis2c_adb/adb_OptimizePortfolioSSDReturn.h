

        #ifndef ADB_OPTIMIZEPORTFOLIOSSDRETURN_H
        #define ADB_OPTIMIZEPORTFOLIOSSDRETURN_H

       /**
        * adb_OptimizePortfolioSSDReturn.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.1  Built on : Aug 31, 2011 (12:23:23 CEST)
        */

       /**
        *  adb_OptimizePortfolioSSDReturn class
        */

        

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
        

        typedef struct adb_OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_OptimizePortfolioSSDReturn_t
         * @param env pointer to environment struct
         * @return newly created adb_OptimizePortfolioSSDReturn_t object
         */
        adb_OptimizePortfolioSSDReturn_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_free (
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

        /**
         * Free adb_OptimizePortfolioSSDReturn_t object
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_free_obj (
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for expReturn. 
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return double
         */
        double AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_get_expReturn(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

        /**
         * Setter for expReturn.
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param arg_expReturn double
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_set_expReturn(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env,
            const double  arg_expReturn);

        /**
         * Resetter for expReturn
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_reset_expReturn(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

        
        

        /**
         * Getter for portfolioRatio. Deprecated for array types, Use adb_OptimizePortfolioSSDReturn_get_portfolioRatio_at instead
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return Array of double*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_get_portfolioRatio(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

        /**
         * Setter for portfolioRatio.Deprecated for array types, Use adb_OptimizePortfolioSSDReturn_set_portfolioRatio_at
         * or adb_OptimizePortfolioSSDReturn_add_portfolioRatio instead.
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param arg_portfolioRatio Array of double*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_set_portfolioRatio(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_portfolioRatio);

        /**
         * Resetter for portfolioRatio
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_reset_portfolioRatio(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

        
        

        /**
         * Getter for resultCode. 
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_get_resultCode(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

        /**
         * Setter for resultCode.
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param arg_resultCode int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_set_resultCode(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env,
            const int  arg_resultCode);

        /**
         * Resetter for resultCode
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_reset_resultCode(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < adb_element_sizeof_property(adb_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = adb_element_get_property_at(adb_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     adb_element_set_property_at(adb_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     adb_element_add_property(adb_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     adb_element_remove_property_at(adb_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of portfolioRatio.
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith double of the array
         */
        double AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_get_portfolioRatio_at(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of portfolioRatio. (If the ith already exist, it will be replaced)
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_portfolioRatio element to set double to the array
         * @return ith double of the array
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_set_portfolioRatio_at(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env, int i,
                const double arg_portfolioRatio);


        /**
         * Add to portfolioRatio.
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param arg_portfolioRatio element to add double to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_add_portfolioRatio(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env,
                const double arg_portfolioRatio);

        /**
         * Get the size of the portfolioRatio array.
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct.
         * @return the size of the portfolioRatio array.
         */
        int AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_sizeof_portfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of portfolioRatio.
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_remove_portfolioRatio_at(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether expReturn is nill
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_is_expReturn_nil(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env);


        

        /**
         * Check whether portfolioRatio is nill
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_is_portfolioRatio_nil(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env);


        
        /**
         * Set portfolioRatio to nill (currently the same as reset)
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_set_portfolioRatio_nil(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env);
        

        /**
         * Check whether resultCode is nill
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_is_resultCode_nil(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether portfolioRatio is nill at i
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_is_portfolioRatio_nil_at(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set portfolioRatio to nill at i
         * @param  _OptimizePortfolioSSDReturn _ adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_set_portfolioRatio_nil_at(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_deserialize(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_deserialize_obj(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_OptimizePortfolioSSDReturn_declare_parent_namespaces(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param OptimizePortfolioSSDReturn_om_node node to serialize from
         * @param OptimizePortfolioSSDReturn_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_serialize(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env,
            axiom_node_t* OptimizePortfolioSSDReturn_om_node, axiom_element_t *OptimizePortfolioSSDReturn_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @param OptimizePortfolioSSDReturn_om_node node to serialize from
         * @param OptimizePortfolioSSDReturn_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_serialize_obj(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env,
            axiom_node_t* OptimizePortfolioSSDReturn_om_node, axiom_element_t *OptimizePortfolioSSDReturn_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_OptimizePortfolioSSDReturn is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_OptimizePortfolioSSDReturn_t
         * @param env pointer to environment struct
         * @param _expReturn double
         * @param _portfolioRatio axutil_array_list_t*
         * @param _resultCode int
         * @return newly created adb_OptimizePortfolioSSDReturn_t object
         */
        adb_OptimizePortfolioSSDReturn_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_create_with_values(
            const axutil_env_t *env,
                double _expReturn,
                axutil_array_list_t* _portfolioRatio,
                int _resultCode);

        


                /**
                 * Free adb_OptimizePortfolioSSDReturn_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                double AXIS2_CALL
                adb_OptimizePortfolioSSDReturn_free_popping_value(
                        adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for expReturn by property number (1)
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return double
         */
        double AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_get_property1(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

    
        

        /**
         * Getter for portfolioRatio by property number (2)
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return Array of double*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_get_property2(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

    
        

        /**
         * Getter for resultCode by property number (3)
         * @param  _OptimizePortfolioSSDReturn adb_OptimizePortfolioSSDReturn_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_get_property3(
            adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_OPTIMIZEPORTFOLIOSSDRETURN_H */
    

