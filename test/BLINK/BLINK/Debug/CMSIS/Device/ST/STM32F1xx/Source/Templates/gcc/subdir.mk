################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../CMSIS/Device/ST/STM32F1xx/Source/Templates/gcc/startup_stm32f100xb.s 

OBJS += \
./CMSIS/Device/ST/STM32F1xx/Source/Templates/gcc/startup_stm32f100xb.o 


# Each subdirectory must supply rules for building sources it contributes
CMSIS/Device/ST/STM32F1xx/Source/Templates/gcc/%.o: ../CMSIS/Device/ST/STM32F1xx/Source/Templates/gcc/%.s
	arm-atollic-eabi-gcc -c -mthumb -mcpu=cortex-m3 -g -Wa,--no-warn -x assembler-with-cpp -specs=nano.specs -o "$@" "$<"

