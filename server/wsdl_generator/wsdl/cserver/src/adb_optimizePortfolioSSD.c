

        /**
         * adb_optimizePortfolioSSD.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_optimizePortfolioSSD.h"
        
               /*
                * implmentation of the optimizePortfolioSSD|http://uk.ac.ed.maths.org element
                */
           


        struct adb_optimizePortfolioSSD
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            adb_SymbolSet_t* property_args0;

                
                axis2_bool_t is_valid_args0;
            axis2_char_t* property_args1;

                
                axis2_bool_t is_valid_args1;
            axutil_date_time_t* property_args2;

                
                axis2_bool_t is_valid_args2;
            axutil_date_time_t* property_args3;

                
                axis2_bool_t is_valid_args3;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_optimizePortfolioSSD_t* AXIS2_CALL
        adb_optimizePortfolioSSD_create(
            const axutil_env_t *env)
        {
            adb_optimizePortfolioSSD_t *_optimizePortfolioSSD = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _optimizePortfolioSSD = (adb_optimizePortfolioSSD_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_optimizePortfolioSSD_t));

            if(NULL == _optimizePortfolioSSD)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_optimizePortfolioSSD, 0, sizeof(adb_optimizePortfolioSSD_t));

            _optimizePortfolioSSD->property_Type = axutil_strdup(env, "adb_optimizePortfolioSSD");
            _optimizePortfolioSSD->property_args0  = NULL;
                  _optimizePortfolioSSD->is_valid_args0  = AXIS2_FALSE;
            _optimizePortfolioSSD->property_args1  = NULL;
                  _optimizePortfolioSSD->is_valid_args1  = AXIS2_FALSE;
            _optimizePortfolioSSD->property_args2  = NULL;
                  _optimizePortfolioSSD->is_valid_args2  = AXIS2_FALSE;
            _optimizePortfolioSSD->property_args3  = NULL;
                  _optimizePortfolioSSD->is_valid_args3  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "optimizePortfolioSSD",
                        "http://uk.ac.ed.maths.org",
                        NULL);
                _optimizePortfolioSSD->qname = qname;
            

            return _optimizePortfolioSSD;
        }

        adb_optimizePortfolioSSD_t* AXIS2_CALL
        adb_optimizePortfolioSSD_create_with_values(
            const axutil_env_t *env,
                adb_SymbolSet_t* _args0,
                axis2_char_t* _args1,
                axutil_date_time_t* _args2,
                axutil_date_time_t* _args3)
        {
            adb_optimizePortfolioSSD_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_optimizePortfolioSSD_create(env);

            
              status = adb_optimizePortfolioSSD_set_args0(
                                     adb_obj,
                                     env,
                                     _args0);
              if(status == AXIS2_FAILURE) {
                  adb_optimizePortfolioSSD_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_optimizePortfolioSSD_set_args1(
                                     adb_obj,
                                     env,
                                     _args1);
              if(status == AXIS2_FAILURE) {
                  adb_optimizePortfolioSSD_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_optimizePortfolioSSD_set_args2(
                                     adb_obj,
                                     env,
                                     _args2);
              if(status == AXIS2_FAILURE) {
                  adb_optimizePortfolioSSD_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_optimizePortfolioSSD_set_args3(
                                     adb_obj,
                                     env,
                                     _args3);
              if(status == AXIS2_FAILURE) {
                  adb_optimizePortfolioSSD_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_SymbolSet_t* AXIS2_CALL
                adb_optimizePortfolioSSD_free_popping_value(
                        adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                        const axutil_env_t *env)
                {
                    adb_SymbolSet_t* value;

                    
                    
                    value = _optimizePortfolioSSD->property_args0;

                    _optimizePortfolioSSD->property_args0 = (adb_SymbolSet_t*)NULL;
                    adb_optimizePortfolioSSD_free(_optimizePortfolioSSD, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_free(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env)
        {
            
            
            return adb_optimizePortfolioSSD_free_obj(
                _optimizePortfolioSSD,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_free_obj(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);

            if (_optimizePortfolioSSD->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _optimizePortfolioSSD->property_Type);
            }

            adb_optimizePortfolioSSD_reset_args0(_optimizePortfolioSSD, env);
            adb_optimizePortfolioSSD_reset_args1(_optimizePortfolioSSD, env);
            adb_optimizePortfolioSSD_reset_args2(_optimizePortfolioSSD, env);
            adb_optimizePortfolioSSD_reset_args3(_optimizePortfolioSSD, env);
            
              if(_optimizePortfolioSSD->qname)
              {
                  axutil_qname_free (_optimizePortfolioSSD->qname, env);
                  _optimizePortfolioSSD->qname = NULL;
              }
            

            if(_optimizePortfolioSSD)
            {
                AXIS2_FREE(env->allocator, _optimizePortfolioSSD);
                _optimizePortfolioSSD = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_deserialize(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_optimizePortfolioSSD_deserialize_obj(
                _optimizePortfolioSSD,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_optimizePortfolioSSD_deserialize_obj(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
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
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for optimizePortfolioSSD : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _optimizePortfolioSSD-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for optimizePortfolioSSD : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_optimizePortfolioSSD-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building args0 element
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
                                   
                                 element_qname = axutil_qname_create(env, "args0", "http://uk.ac.ed.maths.org", NULL);
                                 

                           if (adb_SymbolSet_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_SymbolSet");

                                      status =  adb_SymbolSet_deserialize((adb_SymbolSet_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element args0");
                                      }
                                      else
                                      {
                                          status = adb_optimizePortfolioSSD_set_args0(_optimizePortfolioSSD, env,
                                                                   (adb_SymbolSet_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for args0 ");
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
                      * building args1 element
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
                                 
                                 element_qname = axutil_qname_create(env, "args1", "http://uk.ac.ed.maths.org", NULL);
                                 

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
                                            status = adb_optimizePortfolioSSD_set_args1(_optimizePortfolioSSD, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for args1 ");
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
                      * building args2 element
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
                                 
                                 element_qname = axutil_qname_create(env, "args2", "http://uk.ac.ed.maths.org", NULL);
                                 

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
                                          element = (void*)axutil_date_time_create(env);
                                          status = axutil_date_time_deserialize_date_time((axutil_date_time_t*)element, env,
                                                                          text_value);
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              if(element != NULL)
                                              {
                                                  axutil_date_time_free((axutil_date_time_t*)element, env);
                                              }
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element args2 ");
                                          }
                                          else
                                          {
                                            status = adb_optimizePortfolioSSD_set_args2(_optimizePortfolioSSD, env,
                                                                       (axutil_date_time_t*)element);
                                          }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for args2 ");
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
                      * building args3 element
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
                                 
                                 element_qname = axutil_qname_create(env, "args3", "http://uk.ac.ed.maths.org", NULL);
                                 

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
                                          element = (void*)axutil_date_time_create(env);
                                          status = axutil_date_time_deserialize_date_time((axutil_date_time_t*)element, env,
                                                                          text_value);
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              if(element != NULL)
                                              {
                                                  axutil_date_time_free((axutil_date_time_t*)element, env);
                                              }
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element args3 ");
                                          }
                                          else
                                          {
                                            status = adb_optimizePortfolioSSD_set_args3(_optimizePortfolioSSD, env,
                                                                       (axutil_date_time_t*)element);
                                          }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for args3 ");
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
          adb_optimizePortfolioSSD_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_optimizePortfolioSSD_declare_parent_namespaces(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_optimizePortfolioSSD_serialize(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_optimizePortfolioSSD_serialize_obj(
                    _optimizePortfolioSSD, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_optimizePortfolioSSD_serialize_obj(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://uk.ac.ed.maths.org",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "optimizePortfolioSSD", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://uk.ac.ed.maths.org",
                                            p_prefix));
                       }
                      

                   if (!_optimizePortfolioSSD->is_valid_args0)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("args0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("args0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing args0 element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sargs0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sargs0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_SymbolSet_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_SymbolSet_serialize(_optimizePortfolioSSD->property_args0, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_SymbolSet_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_SymbolSet_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://uk.ac.ed.maths.org",
                                            p_prefix));
                       }
                      

                   if (!_optimizePortfolioSSD->is_valid_args1)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("args1"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("args1")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing args1 element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sargs1>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sargs1>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _optimizePortfolioSSD->property_args1;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_2_temp = axutil_xml_quote_string(env, text_value_2, AXIS2_TRUE);
                           if (text_value_2_temp)
                           {
                               axutil_stream_write(stream, env, text_value_2_temp, axutil_strlen(text_value_2_temp));
                               AXIS2_FREE(env->allocator, text_value_2_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://uk.ac.ed.maths.org",
                                            p_prefix));
                       }
                      

                   if (!_optimizePortfolioSSD->is_valid_args2)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("args2"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("args2")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing args2 element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sargs2>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sargs2>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_3 = axutil_date_time_serialize_date_time(_optimizePortfolioSSD->property_args2, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://uk.ac.ed.maths.org", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://uk.ac.ed.maths.org",
                                            p_prefix));
                       }
                      

                   if (!_optimizePortfolioSSD->is_valid_args3)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("args3"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("args3")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing args3 element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sargs3>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sargs3>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_4 = axutil_date_time_serialize_date_time(_optimizePortfolioSSD->property_args3, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for args0 by  Property Number 1
             */
            adb_SymbolSet_t* AXIS2_CALL
            adb_optimizePortfolioSSD_get_property1(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env)
            {
                return adb_optimizePortfolioSSD_get_args0(_optimizePortfolioSSD,
                                             env);
            }

            /**
             * getter for args0.
             */
            adb_SymbolSet_t* AXIS2_CALL
            adb_optimizePortfolioSSD_get_args0(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, NULL);
                  

                return _optimizePortfolioSSD->property_args0;
             }

            /**
             * setter for args0
             */
            axis2_status_t AXIS2_CALL
            adb_optimizePortfolioSSD_set_args0(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env,
                    adb_SymbolSet_t*  arg_args0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);
                
                if(_optimizePortfolioSSD->is_valid_args0 &&
                        arg_args0 == _optimizePortfolioSSD->property_args0)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_optimizePortfolioSSD_reset_args0(_optimizePortfolioSSD, env);

                
                if(NULL == arg_args0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _optimizePortfolioSSD->property_args0 = arg_args0;
                        _optimizePortfolioSSD->is_valid_args0 = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for args0
            */
           axis2_status_t AXIS2_CALL
           adb_optimizePortfolioSSD_reset_args0(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);
               

               
            
                
                if(_optimizePortfolioSSD->property_args0 != NULL)
                {
                   
                   adb_SymbolSet_free(_optimizePortfolioSSD->property_args0, env);
                     _optimizePortfolioSSD->property_args0 = NULL;
                }
            
                
                
                _optimizePortfolioSSD->is_valid_args0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether args0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_optimizePortfolioSSD_is_args0_nil(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_TRUE);
               
               return !_optimizePortfolioSSD->is_valid_args0;
           }

           /**
            * Set args0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_optimizePortfolioSSD_set_args0_nil(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               return adb_optimizePortfolioSSD_reset_args0(_optimizePortfolioSSD, env);
           }

           

            /**
             * Getter for args1 by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_optimizePortfolioSSD_get_property2(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env)
            {
                return adb_optimizePortfolioSSD_get_args1(_optimizePortfolioSSD,
                                             env);
            }

            /**
             * getter for args1.
             */
            axis2_char_t* AXIS2_CALL
            adb_optimizePortfolioSSD_get_args1(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, NULL);
                  

                return _optimizePortfolioSSD->property_args1;
             }

            /**
             * setter for args1
             */
            axis2_status_t AXIS2_CALL
            adb_optimizePortfolioSSD_set_args1(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_args1)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);
                
                if(_optimizePortfolioSSD->is_valid_args1 &&
                        arg_args1 == _optimizePortfolioSSD->property_args1)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_optimizePortfolioSSD_reset_args1(_optimizePortfolioSSD, env);

                
                if(NULL == arg_args1)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _optimizePortfolioSSD->property_args1 = (axis2_char_t *)axutil_strdup(env, arg_args1);
                        if(NULL == _optimizePortfolioSSD->property_args1)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for args1");
                            return AXIS2_FAILURE;
                        }
                        _optimizePortfolioSSD->is_valid_args1 = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for args1
            */
           axis2_status_t AXIS2_CALL
           adb_optimizePortfolioSSD_reset_args1(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);
               

               
            
                
                if(_optimizePortfolioSSD->property_args1 != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _optimizePortfolioSSD->property_args1);
                     _optimizePortfolioSSD->property_args1 = NULL;
                }
            
                
                
                _optimizePortfolioSSD->is_valid_args1 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether args1 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_optimizePortfolioSSD_is_args1_nil(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_TRUE);
               
               return !_optimizePortfolioSSD->is_valid_args1;
           }

           /**
            * Set args1 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_optimizePortfolioSSD_set_args1_nil(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               return adb_optimizePortfolioSSD_reset_args1(_optimizePortfolioSSD, env);
           }

           

            /**
             * Getter for args2 by  Property Number 3
             */
            axutil_date_time_t* AXIS2_CALL
            adb_optimizePortfolioSSD_get_property3(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env)
            {
                return adb_optimizePortfolioSSD_get_args2(_optimizePortfolioSSD,
                                             env);
            }

            /**
             * getter for args2.
             */
            axutil_date_time_t* AXIS2_CALL
            adb_optimizePortfolioSSD_get_args2(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, NULL);
                  

                return _optimizePortfolioSSD->property_args2;
             }

            /**
             * setter for args2
             */
            axis2_status_t AXIS2_CALL
            adb_optimizePortfolioSSD_set_args2(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env,
                    axutil_date_time_t*  arg_args2)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);
                
                if(_optimizePortfolioSSD->is_valid_args2 &&
                        arg_args2 == _optimizePortfolioSSD->property_args2)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_optimizePortfolioSSD_reset_args2(_optimizePortfolioSSD, env);

                
                if(NULL == arg_args2)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _optimizePortfolioSSD->property_args2 = arg_args2;
                        _optimizePortfolioSSD->is_valid_args2 = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for args2
            */
           axis2_status_t AXIS2_CALL
           adb_optimizePortfolioSSD_reset_args2(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);
               

               
            
                
                if(_optimizePortfolioSSD->property_args2 != NULL)
                {
                   
                   
                      axutil_date_time_free(_optimizePortfolioSSD->property_args2, env);
                     _optimizePortfolioSSD->property_args2 = NULL;
                }
            
                
                
                _optimizePortfolioSSD->is_valid_args2 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether args2 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_optimizePortfolioSSD_is_args2_nil(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_TRUE);
               
               return !_optimizePortfolioSSD->is_valid_args2;
           }

           /**
            * Set args2 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_optimizePortfolioSSD_set_args2_nil(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               return adb_optimizePortfolioSSD_reset_args2(_optimizePortfolioSSD, env);
           }

           

            /**
             * Getter for args3 by  Property Number 4
             */
            axutil_date_time_t* AXIS2_CALL
            adb_optimizePortfolioSSD_get_property4(
                adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                const axutil_env_t *env)
            {
                return adb_optimizePortfolioSSD_get_args3(_optimizePortfolioSSD,
                                             env);
            }

            /**
             * getter for args3.
             */
            axutil_date_time_t* AXIS2_CALL
            adb_optimizePortfolioSSD_get_args3(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, NULL);
                  

                return _optimizePortfolioSSD->property_args3;
             }

            /**
             * setter for args3
             */
            axis2_status_t AXIS2_CALL
            adb_optimizePortfolioSSD_set_args3(
                    adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                    const axutil_env_t *env,
                    axutil_date_time_t*  arg_args3)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);
                
                if(_optimizePortfolioSSD->is_valid_args3 &&
                        arg_args3 == _optimizePortfolioSSD->property_args3)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_optimizePortfolioSSD_reset_args3(_optimizePortfolioSSD, env);

                
                if(NULL == arg_args3)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _optimizePortfolioSSD->property_args3 = arg_args3;
                        _optimizePortfolioSSD->is_valid_args3 = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for args3
            */
           axis2_status_t AXIS2_CALL
           adb_optimizePortfolioSSD_reset_args3(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_FAILURE);
               

               
            
                
                if(_optimizePortfolioSSD->property_args3 != NULL)
                {
                   
                   
                      axutil_date_time_free(_optimizePortfolioSSD->property_args3, env);
                     _optimizePortfolioSSD->property_args3 = NULL;
                }
            
                
                
                _optimizePortfolioSSD->is_valid_args3 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether args3 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_optimizePortfolioSSD_is_args3_nil(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _optimizePortfolioSSD, AXIS2_TRUE);
               
               return !_optimizePortfolioSSD->is_valid_args3;
           }

           /**
            * Set args3 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_optimizePortfolioSSD_set_args3_nil(
                   adb_optimizePortfolioSSD_t* _optimizePortfolioSSD,
                   const axutil_env_t *env)
           {
               return adb_optimizePortfolioSSD_reset_args3(_optimizePortfolioSSD, env);
           }

           

