################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include User/src/subdir.mk
-include CMSIS/Device/ST/STM32F1xx/Source/Templates/gcc/subdir.mk
-include CMSIS/Device/ST/STM32F1xx/Source/Templates/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECOUTPUTBUILDVAR += \
EXECUTABLES \


# All Target
all: BLINK.elf secondary-outputs

# Tool invocations
BLINK.elf: $(OBJS) $(USER_OBJS)
	arm-atollic-eabi-gcc -o "BLINK.elf" $(OBJS) $(USER_OBJS) $(LIBS) -mthumb -mcpu=cortex-m3 -T"C:\Users\Bidu4\STM32\Projects\BLINK\CMSIS\Device\ST\STM32F1xx\Source\Templates\gcc\linker\STM32F100XB_FLASH.ld" -nostartfiles -nodefaultlibs -nostdlib -static -Wl,-cref,-u,Reset_Handler "-Wl,-Map=BLINK.map" -Wl,--gc-sections -Wl,--defsym=malloc_getpagesize_P=0x80 -Wl,--start-group -lc -lm -Wl,--end-group -specs=nano.specs
	$(MAKE) --no-print-directory post-build

EXECUTABLES: BLINK.elf $(EXECUTABLES)
	"C:\Program Files (x86)\Atollic\TrueSTUDIO for STM32 9.3.0\ide\jre\bin\java" -jar "C:\Program Files (x86)\Atollic\TrueSTUDIO for STM32 9.3.0\Tools\arm-atollic-reports.jar" convert-hex sizeinfo list BLINK.elf

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(SECOUTPUTBUILDVAR)$(OBJS)$(C_DEPS) BLINK.elf
	-@echo ' '

post-build:
	-arm-atollic-eabi-objcopy.exe -O ihex "BLINK.elf" "BLINK.hex"
	-@echo ' '

secondary-outputs: $(SECOUTPUTBUILDVAR)

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
