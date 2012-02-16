################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AlmDataWriter.cpp \
../src/DataRetriever.cpp \
../src/Log.cpp \
../src/ProbabilityPolicy.cpp 

OBJS += \
./src/AlmDataWriter.o \
./src/DataRetriever.o \
./src/Log.o \
./src/ProbabilityPolicy.o 

CPP_DEPS += \
./src/AlmDataWriter.d \
./src/DataRetriever.d \
./src/Log.d \
./src/ProbabilityPolicy.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/lib/axis2/include/axis2-1.6.0 -I"/home/s0965328/workspace-smartphone/server/server_side/axis2c_adb" -I"/home/s0965328/workspace-smartphone/server/server_side/src" -O3 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


