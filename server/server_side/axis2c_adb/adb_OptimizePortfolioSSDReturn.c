

        /**
         * adb_OptimizePortfolioSSDReturn.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_OptimizePortfolioSSDReturn.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = OptimizePortfolioSSDReturn
                 * Namespace URI = http://uk.ac.ed.maths.org/xsd
                 * Namespace Prefix = ns1
                 */
           
#ifdef __cplusplus
extern "C"
{
#endif

        struct adb_OptimizePortfolioSSDReturn
        {
            axis2_char_t *property_Type;

            double property_expReturn;

                
                axis2_bool_t is_valid_expReturn;
            axutil_array_list_t* property_portfolioRatio;

                
                axis2_bool_t is_valid_portfolioRatio;
            axutil_array_list_t* property_protfolioRatio;

                
                axis2_bool_t is_valid_protfolioRatio;
            int property_resultCode;

                
                axis2_bool_t is_valid_resultCode;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_OptimizePortfolioSSDReturn_set_expReturn_nil(
                        adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_OptimizePortfolioSSDReturn_set_resultCode_nil(
                        adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_OptimizePortfolioSSDReturn_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_create(
            const axutil_env_t *env)
        {
            adb_OptimizePortfolioSSDReturn_t *_OptimizePortfolioSSDReturn = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _OptimizePortfolioSSDReturn = (adb_OptimizePortfolioSSDReturn_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_OptimizePortfolioSSDReturn_t));

            if(NULL == _OptimizePortfolioSSDReturn)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_OptimizePortfolioSSDReturn, 0, sizeof(adb_OptimizePortfolioSSDReturn_t));

            _OptimizePortfolioSSDReturn->property_Type = (axis2_char_t*)axutil_strdup(env, "adb_OptimizePortfolioSSDReturn");
            _OptimizePortfolioSSDReturn->is_valid_expReturn  = AXIS2_FALSE;
            _OptimizePortfolioSSDReturn->is_valid_portfolioRatio  = AXIS2_FALSE;
            _OptimizePortfolioSSDReturn->is_valid_protfolioRatio  = AXIS2_FALSE;
            _OptimizePortfolioSSDReturn->is_valid_resultCode  = AXIS2_FALSE;
            

            return _OptimizePortfolioSSDReturn;
        }

        adb_OptimizePortfolioSSDReturn_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_create_with_values(
            const axutil_env_t *env,
                double _expReturn,
                axutil_array_list_t* _portfolioRatio,
                axutil_array_list_t* _protfolioRatio,
                int _resultCode)
        {
            adb_OptimizePortfolioSSDReturn_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_OptimizePortfolioSSDReturn_create(env);

            
              status = adb_OptimizePortfolioSSDReturn_set_expReturn(
                                     adb_obj,
                                     env,
                                     _expReturn);
              if(status == AXIS2_FAILURE) {
                  adb_OptimizePortfolioSSDReturn_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_OptimizePortfolioSSDReturn_set_portfolioRatio(
                                     adb_obj,
                                     env,
                                     _portfolioRatio);
              if(status == AXIS2_FAILURE) {
                  adb_OptimizePortfolioSSDReturn_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_OptimizePortfolioSSDReturn_set_protfolioRatio(
                                     adb_obj,
                                     env,
                                     _protfolioRatio);
              if(status == AXIS2_FAILURE) {
                  adb_OptimizePortfolioSSDReturn_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_OptimizePortfolioSSDReturn_set_resultCode(
                                     adb_obj,
                                     env,
                                     _resultCode);
              if(status == AXIS2_FAILURE) {
                  adb_OptimizePortfolioSSDReturn_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        double AXIS2_CALL
                adb_OptimizePortfolioSSDReturn_free_popping_value(
                        adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                        const axutil_env_t *env)
                {
                    double value;

                    
                    
                    value = _OptimizePortfolioSSDReturn->property_expReturn;

                    adb_OptimizePortfolioSSDReturn_free(_OptimizePortfolioSSDReturn, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_free(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_type_t*) _OptimizePortfolioSSDReturn,
                env,
                "adb_OptimizePortfolioSSDReturn");
            
        }

        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_free_obj(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);

            if (_OptimizePortfolioSSDReturn->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _OptimizePortfolioSSDReturn->property_Type);
            }

            adb_OptimizePortfolioSSDReturn_reset_expReturn(_OptimizePortfolioSSDReturn, env);
            adb_OptimizePortfolioSSDReturn_reset_portfolioRatio(_OptimizePortfolioSSDReturn, env);
            adb_OptimizePortfolioSSDReturn_reset_protfolioRatio(_OptimizePortfolioSSDReturn, env);
            adb_OptimizePortfolioSSDReturn_reset_resultCode(_OptimizePortfolioSSDReturn, env);
            

            if(_OptimizePortfolioSSDReturn)
            {
                AXIS2_FREE(env->allocator, _OptimizePortfolioSSDReturn);
                _OptimizePortfolioSSDReturn = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_deserialize(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_type_t*) _OptimizePortfolioSSDReturn,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_OptimizePortfolioSSDReturn");
            
        }

        axis2_status_t AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_deserialize_obj(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for OptimizePortfolioSSDReturn : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building expReturn element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "expReturn", "http://uk.ac.ed.maths.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_OptimizePortfolioSSDReturn_set_expReturn(_OptimizePortfolioSSDReturn, env,
                                                                   atof(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element expReturn");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for expReturn ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building portfolioRatio array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building portfolioRatio element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "portfolioRatio", "http://uk.ac.ed.maths.org/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = axiom_element_get_text(current_element, env, current_node);
                                          if(text_value != NULL)
                                          {
                                               /* we keeps float in arrays from their pointers */
                                               element = AXIS2_MALLOC(env-> allocator, sizeof(double));
                                               (*(double*)element) = atof(text_value);
                                               axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                          
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for portfolioRatio ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "portfolioRatio (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_OptimizePortfolioSSDReturn_set_portfolioRatio(_OptimizePortfolioSSDReturn, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building protfolioRatio array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building protfolioRatio element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "protfolioRatio", "http://uk.ac.ed.maths.org/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = axiom_element_get_text(current_element, env, current_node);
                                          if(text_value != NULL)
                                          {
                                               /* we keeps float in arrays from their pointers */
                                               element = AXIS2_MALLOC(env-> allocator, sizeof(double));
                                               (*(double*)element) = atof(text_value);
                                               axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                          
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for protfolioRatio ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "protfolioRatio (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_OptimizePortfolioSSDReturn_set_protfolioRatio(_OptimizePortfolioSSDReturn, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building resultCode element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "resultCode", "http://uk.ac.ed.maths.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_OptimizePortfolioSSDReturn_set_resultCode(_OptimizePortfolioSSDReturn, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element resultCode");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for resultCode ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_OptimizePortfolioSSDReturn_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_OptimizePortfolioSSDReturn_declare_parent_namespaces(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_serialize(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_OptimizePortfolioSSDReturn == NULL)
            {
                return adb_OptimizePortfolioSSDReturn_serialize_obj(
                    _OptimizePortfolioSSDReturn, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_type_t*) _OptimizePortfolioSSDReturn, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_OptimizePortfolioSSDReturn");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_OptimizePortfolioSSDReturn_serialize_obj(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
         axis2_char_t* xsi_prefix = NULL;
         
         axis2_char_t* type_attrib = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"OptimizePortfolioSSDReturn\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://uk.ac.ed.maths.org/xsd",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "OptimizePortfolioSSDReturn", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://uk.ac.ed.maths.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://uk.ac.ed.maths.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OptimizePortfolioSSDReturn->is_valid_expReturn)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("expReturn"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("expReturn")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing expReturn element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sexpReturn>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sexpReturn>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_1, "%f", (double)_OptimizePortfolioSSDReturn->property_expReturn);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://uk.ac.ed.maths.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://uk.ac.ed.maths.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OptimizePortfolioSSDReturn->is_valid_portfolioRatio)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("portfolioRatio"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("portfolioRatio")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing portfolioRatio array
                      */
                     if (_OptimizePortfolioSSDReturn->property_portfolioRatio != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sportfolioRatio>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sportfolioRatio>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_OptimizePortfolioSSDReturn->property_portfolioRatio, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_OptimizePortfolioSSDReturn->property_portfolioRatio, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing portfolioRatio element
                      */

                    
                    
                               sprintf (text_value_2, "%f", (double)*((double*)element));
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://uk.ac.ed.maths.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://uk.ac.ed.maths.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OptimizePortfolioSSDReturn->is_valid_protfolioRatio)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("protfolioRatio"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("protfolioRatio")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing protfolioRatio array
                      */
                     if (_OptimizePortfolioSSDReturn->property_protfolioRatio != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sprotfolioRatio>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sprotfolioRatio>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_OptimizePortfolioSSDReturn->property_protfolioRatio, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_OptimizePortfolioSSDReturn->property_protfolioRatio, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing protfolioRatio element
                      */

                    
                    
                               sprintf (text_value_3, "%f", (double)*((double*)element));
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://uk.ac.ed.maths.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://uk.ac.ed.maths.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OptimizePortfolioSSDReturn->is_valid_resultCode)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("resultCode"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("resultCode")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing resultCode element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sresultCode>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sresultCode>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_4, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _OptimizePortfolioSSDReturn->property_resultCode);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for expReturn by  Property Number 1
             */
            double AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_property1(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env)
            {
                return adb_OptimizePortfolioSSDReturn_get_expReturn(_OptimizePortfolioSSDReturn,
                                             env);
            }

            /**
             * getter for expReturn.
             */
            double AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_expReturn(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (double)0);
                    AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, (double)0);
                  

                return _OptimizePortfolioSSDReturn->property_expReturn;
             }

            /**
             * setter for expReturn
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_set_expReturn(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env,
                    const double  arg_expReturn)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
                
                if(_OptimizePortfolioSSDReturn->is_valid_expReturn &&
                        arg_expReturn == _OptimizePortfolioSSDReturn->property_expReturn)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_OptimizePortfolioSSDReturn_reset_expReturn(_OptimizePortfolioSSDReturn, env);

                _OptimizePortfolioSSDReturn->property_expReturn = arg_expReturn;
                        _OptimizePortfolioSSDReturn->is_valid_expReturn = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for expReturn
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_reset_expReturn(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
               

               _OptimizePortfolioSSDReturn->is_valid_expReturn = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether expReturn is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_is_expReturn_nil(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_TRUE);
               
               return !_OptimizePortfolioSSDReturn->is_valid_expReturn;
           }

           /**
            * Set expReturn to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_set_expReturn_nil(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               return adb_OptimizePortfolioSSDReturn_reset_expReturn(_OptimizePortfolioSSDReturn, env);
           }

           

            /**
             * Getter for portfolioRatio by  Property Number 2
             */
            axutil_array_list_t* AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_property2(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env)
            {
                return adb_OptimizePortfolioSSDReturn_get_portfolioRatio(_OptimizePortfolioSSDReturn,
                                             env);
            }

            /**
             * getter for portfolioRatio.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_portfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, NULL);
                  

                return _OptimizePortfolioSSDReturn->property_portfolioRatio;
             }

            /**
             * setter for portfolioRatio
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_set_portfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_portfolioRatio)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
                
                if(_OptimizePortfolioSSDReturn->is_valid_portfolioRatio &&
                        arg_portfolioRatio == _OptimizePortfolioSSDReturn->property_portfolioRatio)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_portfolioRatio, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "portfolioRatio has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_portfolioRatio, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_OptimizePortfolioSSDReturn_reset_portfolioRatio(_OptimizePortfolioSSDReturn, env);

                
                if(NULL == arg_portfolioRatio)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _OptimizePortfolioSSDReturn->property_portfolioRatio = arg_portfolioRatio;
                        if(non_nil_exists)
                        {
                            _OptimizePortfolioSSDReturn->is_valid_portfolioRatio = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of portfolioRatio.
             */
            double AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_portfolioRatio_at(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env, int i)
            {
                double* ret_val;

                
                    AXIS2_ENV_CHECK(env, (double)0);
                    AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, (double)0);
                  

                if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL)
                {
                    return (double)0;
                }
                ret_val = (double*)axutil_array_list_get(_OptimizePortfolioSSDReturn->property_portfolioRatio, env, i);
                
                    if(ret_val)
                    {
                        return *ret_val;
                    }
                    return (double)0;
                  
            }

            /**
             * Set the ith element of portfolioRatio.
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_set_portfolioRatio_at(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env, int i,
                    const double arg_portfolioRatio)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                double* ptr_param_portfolioRatio;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
                
                if( _OptimizePortfolioSSDReturn->is_valid_portfolioRatio &&
                    _OptimizePortfolioSSDReturn->property_portfolioRatio &&
                
                    arg_portfolioRatio == *((double*)axutil_array_list_get(_OptimizePortfolioSSDReturn->property_portfolioRatio, env, i)))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                     non_nil_exists = AXIS2_TRUE; /* no way to check for nill for each elements for primitive types */
                  

                if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL)
                {
                    _OptimizePortfolioSSDReturn->property_portfolioRatio = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_OptimizePortfolioSSDReturn->property_portfolioRatio, env, i);
                if(NULL != element)
                {
                  
                  
                  
                        
                        /* we keep primtives as pointers in arrasy, so need to free them */
                        AXIS2_FREE(env-> allocator, element);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _OptimizePortfolioSSDReturn->is_valid_portfolioRatio = AXIS2_FALSE;
                        axutil_array_list_set(_OptimizePortfolioSSDReturn->property_portfolioRatio , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                ptr_param_portfolioRatio =  (double*)
                            AXIS2_MALLOC(env->allocator, sizeof(double));
                   if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for new value of portfolioRatio");
                       return AXIS2_FAILURE;
                       
                   }
                   *ptr_param_portfolioRatio = arg_portfolioRatio;
                   axutil_array_list_set(_OptimizePortfolioSSDReturn->property_portfolioRatio , env, i, ptr_param_portfolioRatio);
                  _OptimizePortfolioSSDReturn->is_valid_portfolioRatio = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to portfolioRatio.
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_add_portfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env,
                    const double arg_portfolioRatio)
             {
                double* ptr_param_portfolioRatio;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);

                

                if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL)
                {
                    _OptimizePortfolioSSDReturn->property_portfolioRatio = axutil_array_list_create(env, 10);
                }
                if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for portfolioRatio");
                    return AXIS2_FAILURE;
                    
                }
                ptr_param_portfolioRatio =  (double*)
                            AXIS2_MALLOC(env->allocator, sizeof(double));
                   if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for new value of portfolioRatio");
                       return AXIS2_FAILURE;
                       
                   }
                   *ptr_param_portfolioRatio = arg_portfolioRatio;
                   axutil_array_list_add(_OptimizePortfolioSSDReturn->property_portfolioRatio , env, ptr_param_portfolioRatio);
                  _OptimizePortfolioSSDReturn->is_valid_portfolioRatio = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the portfolioRatio array.
             */
            int AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_sizeof_portfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, -1);
                if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_OptimizePortfolioSSDReturn->property_portfolioRatio, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_remove_portfolioRatio_at(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env, int i)
            {
                return adb_OptimizePortfolioSSDReturn_set_portfolioRatio_nil_at(_OptimizePortfolioSSDReturn, env, i);
            }

            

           /**
            * resetter for portfolioRatio
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_reset_portfolioRatio(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
               

               
                  if (_OptimizePortfolioSSDReturn->property_portfolioRatio != NULL)
                  {
                      count = axutil_array_list_size(_OptimizePortfolioSSDReturn->property_portfolioRatio, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_OptimizePortfolioSSDReturn->property_portfolioRatio, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                        
                        /* we keep primtives as pointers in arrasy, so need to free them */
                        AXIS2_FREE(env-> allocator, element);
                       element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_OptimizePortfolioSSDReturn->property_portfolioRatio, env);
                  }
                _OptimizePortfolioSSDReturn->is_valid_portfolioRatio = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether portfolioRatio is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_is_portfolioRatio_nil(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_TRUE);
               
               return !_OptimizePortfolioSSDReturn->is_valid_portfolioRatio;
           }

           /**
            * Set portfolioRatio to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_set_portfolioRatio_nil(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               return adb_OptimizePortfolioSSDReturn_reset_portfolioRatio(_OptimizePortfolioSSDReturn, env);
           }

           
           /**
            * Check whether portfolioRatio is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_is_portfolioRatio_nil_at(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_TRUE);
               
               return (_OptimizePortfolioSSDReturn->is_valid_portfolioRatio == AXIS2_FALSE ||
                        NULL == _OptimizePortfolioSSDReturn->property_portfolioRatio || 
                        NULL == axutil_array_list_get(_OptimizePortfolioSSDReturn->property_portfolioRatio, env, i));
           }

           /**
            * Set portfolioRatio to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_set_portfolioRatio_nil_at(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);

                if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL ||
                            _OptimizePortfolioSSDReturn->is_valid_portfolioRatio == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_OptimizePortfolioSSDReturn->property_portfolioRatio, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_OptimizePortfolioSSDReturn->property_portfolioRatio, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of portfolioRatio is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_OptimizePortfolioSSDReturn->property_portfolioRatio == NULL)
                {
                    _OptimizePortfolioSSDReturn->is_valid_portfolioRatio = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_OptimizePortfolioSSDReturn->property_portfolioRatio, env, i);
                if(NULL != element)
                {
                  
                  
                  
                        
                        /* we keep primtives as pointers in arrasy, so need to free them */
                        AXIS2_FREE(env-> allocator, element);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _OptimizePortfolioSSDReturn->is_valid_portfolioRatio = AXIS2_FALSE;
                        axutil_array_list_set(_OptimizePortfolioSSDReturn->property_portfolioRatio , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_OptimizePortfolioSSDReturn->property_portfolioRatio , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for protfolioRatio by  Property Number 3
             */
            axutil_array_list_t* AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_property3(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env)
            {
                return adb_OptimizePortfolioSSDReturn_get_protfolioRatio(_OptimizePortfolioSSDReturn,
                                             env);
            }

            /**
             * getter for protfolioRatio.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_protfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, NULL);
                  

                return _OptimizePortfolioSSDReturn->property_protfolioRatio;
             }

            /**
             * setter for protfolioRatio
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_set_protfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_protfolioRatio)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
                
                if(_OptimizePortfolioSSDReturn->is_valid_protfolioRatio &&
                        arg_protfolioRatio == _OptimizePortfolioSSDReturn->property_protfolioRatio)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_protfolioRatio, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "protfolioRatio has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_protfolioRatio, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_OptimizePortfolioSSDReturn_reset_protfolioRatio(_OptimizePortfolioSSDReturn, env);

                
                if(NULL == arg_protfolioRatio)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _OptimizePortfolioSSDReturn->property_protfolioRatio = arg_protfolioRatio;
                        if(non_nil_exists)
                        {
                            _OptimizePortfolioSSDReturn->is_valid_protfolioRatio = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of protfolioRatio.
             */
            double AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_protfolioRatio_at(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env, int i)
            {
                double* ret_val;

                
                    AXIS2_ENV_CHECK(env, (double)0);
                    AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, (double)0);
                  

                if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL)
                {
                    return (double)0;
                }
                ret_val = (double*)axutil_array_list_get(_OptimizePortfolioSSDReturn->property_protfolioRatio, env, i);
                
                    if(ret_val)
                    {
                        return *ret_val;
                    }
                    return (double)0;
                  
            }

            /**
             * Set the ith element of protfolioRatio.
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_set_protfolioRatio_at(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env, int i,
                    const double arg_protfolioRatio)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                double* ptr_param_protfolioRatio;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
                
                if( _OptimizePortfolioSSDReturn->is_valid_protfolioRatio &&
                    _OptimizePortfolioSSDReturn->property_protfolioRatio &&
                
                    arg_protfolioRatio == *((double*)axutil_array_list_get(_OptimizePortfolioSSDReturn->property_protfolioRatio, env, i)))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                     non_nil_exists = AXIS2_TRUE; /* no way to check for nill for each elements for primitive types */
                  

                if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL)
                {
                    _OptimizePortfolioSSDReturn->property_protfolioRatio = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_OptimizePortfolioSSDReturn->property_protfolioRatio, env, i);
                if(NULL != element)
                {
                  
                  
                  
                        
                        /* we keep primtives as pointers in arrasy, so need to free them */
                        AXIS2_FREE(env-> allocator, element);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _OptimizePortfolioSSDReturn->is_valid_protfolioRatio = AXIS2_FALSE;
                        axutil_array_list_set(_OptimizePortfolioSSDReturn->property_protfolioRatio , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                ptr_param_protfolioRatio =  (double*)
                            AXIS2_MALLOC(env->allocator, sizeof(double));
                   if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for new value of protfolioRatio");
                       return AXIS2_FAILURE;
                       
                   }
                   *ptr_param_protfolioRatio = arg_protfolioRatio;
                   axutil_array_list_set(_OptimizePortfolioSSDReturn->property_protfolioRatio , env, i, ptr_param_protfolioRatio);
                  _OptimizePortfolioSSDReturn->is_valid_protfolioRatio = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to protfolioRatio.
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_add_protfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env,
                    const double arg_protfolioRatio)
             {
                double* ptr_param_protfolioRatio;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);

                

                if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL)
                {
                    _OptimizePortfolioSSDReturn->property_protfolioRatio = axutil_array_list_create(env, 10);
                }
                if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for protfolioRatio");
                    return AXIS2_FAILURE;
                    
                }
                ptr_param_protfolioRatio =  (double*)
                            AXIS2_MALLOC(env->allocator, sizeof(double));
                   if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for new value of protfolioRatio");
                       return AXIS2_FAILURE;
                       
                   }
                   *ptr_param_protfolioRatio = arg_protfolioRatio;
                   axutil_array_list_add(_OptimizePortfolioSSDReturn->property_protfolioRatio , env, ptr_param_protfolioRatio);
                  _OptimizePortfolioSSDReturn->is_valid_protfolioRatio = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the protfolioRatio array.
             */
            int AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_sizeof_protfolioRatio(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, -1);
                if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_OptimizePortfolioSSDReturn->property_protfolioRatio, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_remove_protfolioRatio_at(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env, int i)
            {
                return adb_OptimizePortfolioSSDReturn_set_protfolioRatio_nil_at(_OptimizePortfolioSSDReturn, env, i);
            }

            

           /**
            * resetter for protfolioRatio
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_reset_protfolioRatio(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
               

               
                  if (_OptimizePortfolioSSDReturn->property_protfolioRatio != NULL)
                  {
                      count = axutil_array_list_size(_OptimizePortfolioSSDReturn->property_protfolioRatio, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_OptimizePortfolioSSDReturn->property_protfolioRatio, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                        
                        /* we keep primtives as pointers in arrasy, so need to free them */
                        AXIS2_FREE(env-> allocator, element);
                       element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_OptimizePortfolioSSDReturn->property_protfolioRatio, env);
                  }
                _OptimizePortfolioSSDReturn->is_valid_protfolioRatio = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether protfolioRatio is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_is_protfolioRatio_nil(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_TRUE);
               
               return !_OptimizePortfolioSSDReturn->is_valid_protfolioRatio;
           }

           /**
            * Set protfolioRatio to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_set_protfolioRatio_nil(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               return adb_OptimizePortfolioSSDReturn_reset_protfolioRatio(_OptimizePortfolioSSDReturn, env);
           }

           
           /**
            * Check whether protfolioRatio is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_is_protfolioRatio_nil_at(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_TRUE);
               
               return (_OptimizePortfolioSSDReturn->is_valid_protfolioRatio == AXIS2_FALSE ||
                        NULL == _OptimizePortfolioSSDReturn->property_protfolioRatio || 
                        NULL == axutil_array_list_get(_OptimizePortfolioSSDReturn->property_protfolioRatio, env, i));
           }

           /**
            * Set protfolioRatio to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_set_protfolioRatio_nil_at(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);

                if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL ||
                            _OptimizePortfolioSSDReturn->is_valid_protfolioRatio == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_OptimizePortfolioSSDReturn->property_protfolioRatio, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_OptimizePortfolioSSDReturn->property_protfolioRatio, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of protfolioRatio is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_OptimizePortfolioSSDReturn->property_protfolioRatio == NULL)
                {
                    _OptimizePortfolioSSDReturn->is_valid_protfolioRatio = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_OptimizePortfolioSSDReturn->property_protfolioRatio, env, i);
                if(NULL != element)
                {
                  
                  
                  
                        
                        /* we keep primtives as pointers in arrasy, so need to free them */
                        AXIS2_FREE(env-> allocator, element);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _OptimizePortfolioSSDReturn->is_valid_protfolioRatio = AXIS2_FALSE;
                        axutil_array_list_set(_OptimizePortfolioSSDReturn->property_protfolioRatio , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_OptimizePortfolioSSDReturn->property_protfolioRatio , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for resultCode by  Property Number 4
             */
            int AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_property4(
                adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                const axutil_env_t *env)
            {
                return adb_OptimizePortfolioSSDReturn_get_resultCode(_OptimizePortfolioSSDReturn,
                                             env);
            }

            /**
             * getter for resultCode.
             */
            int AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_get_resultCode(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, (int)0);
                  

                return _OptimizePortfolioSSDReturn->property_resultCode;
             }

            /**
             * setter for resultCode
             */
            axis2_status_t AXIS2_CALL
            adb_OptimizePortfolioSSDReturn_set_resultCode(
                    adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                    const axutil_env_t *env,
                    const int  arg_resultCode)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
                
                if(_OptimizePortfolioSSDReturn->is_valid_resultCode &&
                        arg_resultCode == _OptimizePortfolioSSDReturn->property_resultCode)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_OptimizePortfolioSSDReturn_reset_resultCode(_OptimizePortfolioSSDReturn, env);

                _OptimizePortfolioSSDReturn->property_resultCode = arg_resultCode;
                        _OptimizePortfolioSSDReturn->is_valid_resultCode = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for resultCode
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_reset_resultCode(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_FAILURE);
               

               _OptimizePortfolioSSDReturn->is_valid_resultCode = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether resultCode is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_is_resultCode_nil(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OptimizePortfolioSSDReturn, AXIS2_TRUE);
               
               return !_OptimizePortfolioSSDReturn->is_valid_resultCode;
           }

           /**
            * Set resultCode to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OptimizePortfolioSSDReturn_set_resultCode_nil(
                   adb_OptimizePortfolioSSDReturn_t* _OptimizePortfolioSSDReturn,
                   const axutil_env_t *env)
           {
               return adb_OptimizePortfolioSSDReturn_reset_resultCode(_OptimizePortfolioSSDReturn, env);
           }

#ifdef __cplusplus
}
#endif
           

