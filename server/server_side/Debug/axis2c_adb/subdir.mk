################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../axis2c_adb/adb_OptimizePortfolioMADReturn.c \
../axis2c_adb/adb_OptimizePortfolioSSDReturn.c \
../axis2c_adb/adb_SymbolSet.c \
../axis2c_adb/adb_optimizePortfolioMAD.c \
../axis2c_adb/adb_optimizePortfolioMADResponse.c \
../axis2c_adb/adb_optimizePortfolioSSD.c \
../axis2c_adb/adb_optimizePortfolioSSDResponse.c \
../axis2c_adb/axis2_extension_mapper.c 

OBJS += \
./axis2c_adb/adb_OptimizePortfolioMADReturn.o \
./axis2c_adb/adb_OptimizePortfolioSSDReturn.o \
./axis2c_adb/adb_SymbolSet.o \
./axis2c_adb/adb_optimizePortfolioMAD.o \
./axis2c_adb/adb_optimizePortfolioMADResponse.o \
./axis2c_adb/adb_optimizePortfolioSSD.o \
./axis2c_adb/adb_optimizePortfolioSSDResponse.o \
./axis2c_adb/axis2_extension_mapper.o 

C_DEPS += \
./axis2c_adb/adb_OptimizePortfolioMADReturn.d \
./axis2c_adb/adb_OptimizePortfolioSSDReturn.d \
./axis2c_adb/adb_SymbolSet.d \
./axis2c_adb/adb_optimizePortfolioMAD.d \
./axis2c_adb/adb_optimizePortfolioMADResponse.d \
./axis2c_adb/adb_optimizePortfolioSSD.d \
./axis2c_adb/adb_optimizePortfolioSSDResponse.d \
./axis2c_adb/axis2_extension_mapper.d 


# Each subdirectory must supply rules for building sources it contributes
axis2c_adb/%.o: ../axis2c_adb/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	g++ -I/usr/lib/axis2/include/axis2-1.6.0 -I"/home/s0965328/workspace-smartphone/server/server_side/axis2c_adb" -I"/home/s0965328/workspace-smartphone/server/server_side/src" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


