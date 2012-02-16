################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../alm_service_common.cpp \
../alm_ssd_mod.cpp \
../axis2_skel_Alm.cpp 

C_SRCS += \
../axis2_svc_skel_Alm.c 

OBJS += \
./alm_service_common.o \
./alm_ssd_mod.o \
./axis2_skel_Alm.o \
./axis2_svc_skel_Alm.o 

C_DEPS += \
./axis2_svc_skel_Alm.d 

CPP_DEPS += \
./alm_service_common.d \
./alm_ssd_mod.d \
./axis2_skel_Alm.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/lib/axis2/include/axis2-1.6.0 -I"/home/s0965328/workspace-smartphone/server/server_side/axis2c_adb" -I"/home/s0965328/workspace-smartphone/server/server_side/src" -O3 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	g++ -I/usr/lib/axis2/include/axis2-1.6.0 -I"/home/s0965328/workspace-smartphone/server/server_side/axis2c_adb" -I"/home/s0965328/workspace-smartphone/server/server_side/src" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


