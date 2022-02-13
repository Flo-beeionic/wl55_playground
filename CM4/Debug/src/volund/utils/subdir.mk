################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/volund/utils/StringsTools.cpp 

OBJS += \
./src/volund/utils/StringsTools.o 

CPP_DEPS += \
./src/volund/utils/StringsTools.d 


# Each subdirectory must supply rules for building sources it contributes
src/volund/utils/%.o: ../src/volund/utils/%.cpp src/volund/utils/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src/core" -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -std=gnu++17 -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-volund-2f-utils

clean-src-2f-volund-2f-utils:
	-$(RM) ./src/volund/utils/StringsTools.d ./src/volund/utils/StringsTools.o

.PHONY: clean-src-2f-volund-2f-utils

