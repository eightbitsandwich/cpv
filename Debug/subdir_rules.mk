################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
cpv.cpp: ../cpv.ino
	@echo 'Building file: $<'
	@echo 'Invoking: Resource Custom Build Step'
	
	@echo 'Finished building: $<'
	@echo ' '

%.o: ./%.cpp $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Compiler'
	"X:/energia-0101E0015/hardware/tools/msp430/bin/msp430-gcc.exe" -c -mmcu=msp430g2955 -DF_CPU=16000000L -DARDUINO=101 -DENERGIA=13 -I"X:/energia-0101E0015/hardware/msp430/cores/msp430" -I"X:/energia-0101E0015/hardware/msp430/variants/spir_g2955" -I"X:/energia-0101E0015/hardware/tools/msp430/msp430/include" -I"X:/Users/Darkstar/workspace_v6_1/cpv" -Os -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


