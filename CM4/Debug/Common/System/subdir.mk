################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/Common/System/system_stm32wlxx.c 

C_DEPS += \
./Common/System/system_stm32wlxx.d 

OBJS += \
./Common/System/system_stm32wlxx.o 


# Each subdirectory must supply rules for building sources it contributes
Common/System/system_stm32wlxx.o: C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/Common/System/system_stm32wlxx.c Common/System/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Common-2f-System

clean-Common-2f-System:
	-$(RM) ./Common/System/system_stm32wlxx.d ./Common/System/system_stm32wlxx.o

.PHONY: clean-Common-2f-System

