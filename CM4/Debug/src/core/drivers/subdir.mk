################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/core/drivers/Clocks.cpp \
../src/core/drivers/Systick.cpp 

OBJS += \
./src/core/drivers/Clocks.o \
./src/core/drivers/Systick.o 

CPP_DEPS += \
./src/core/drivers/Clocks.d \
./src/core/drivers/Systick.d 


# Each subdirectory must supply rules for building sources it contributes
src/core/drivers/%.o: ../src/core/drivers/%.cpp src/core/drivers/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src/core" -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -std=gnu++17 -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-core-2f-drivers

clean-src-2f-core-2f-drivers:
	-$(RM) ./src/core/drivers/Clocks.d ./src/core/drivers/Clocks.o ./src/core/drivers/Systick.d ./src/core/drivers/Systick.o

.PHONY: clean-src-2f-core-2f-drivers

