################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/src/clk.c \
../User/src/gpio.c \
../User/src/main.c \
../User/src/syscalls.c 

OBJS += \
./User/src/clk.o \
./User/src/gpio.o \
./User/src/main.o \
./User/src/syscalls.o 

C_DEPS += \
./User/src/clk.d \
./User/src/gpio.d \
./User/src/main.d \
./User/src/syscalls.d 


# Each subdirectory must supply rules for building sources it contributes
User/src/%.o: ../User/src/%.c
	arm-atollic-eabi-gcc -c "$<" -mthumb -mcpu=cortex-m3 -std=gnu11 -DSTM32F100xB -D__weak=__attribute__((weak)) -D__packed=__attribute__((__packed__)) -I"D:\MCU_PROJ\STM32\BLINK\BLINK\CMSIS\Core\Include" -I"D:\MCU_PROJ\STM32\BLINK\BLINK\CMSIS\Device\ST\STM32F1xx\Include" -I"D:\MCU_PROJ\STM32\BLINK\BLINK\CMSIS\Include" -I"D:\MCU_PROJ\STM32\BLINK\BLINK\User\inc" -I"D:\MCU_PROJ\STM32\BLINK\BLINK\CMSIS\Device\ST\STM32F1xx\Source" -I"D:\MCU_PROJ\STM32\BLINK\BLINK\CMSIS\Device\ST\STM32F1xx\Include" -I"D:\MCU_PROJ\STM32\BLINK\BLINK\CMSIS\Device\ST\STM32F1xx\Source\Templates" -I"D:\MCU_PROJ\STM32\BLINK\BLINK\CMSIS\Device\ST\STM32F1xx\Source\Templates\gcc" -I"D:\MCU_PROJ\STM32\BLINK\BLINK\CMSIS\Device\ST\STM32F1xx\Source\Templates\gcc\linker" -O0 -g -fstack-usage -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -specs=nano.specs -o "$@"

