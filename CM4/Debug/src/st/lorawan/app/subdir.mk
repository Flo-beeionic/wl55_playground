################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/st/lorawan/app/app_lorawan.c \
../src/st/lorawan/app/lora_app.c 

C_DEPS += \
./src/st/lorawan/app/app_lorawan.d \
./src/st/lorawan/app/lora_app.d 

OBJS += \
./src/st/lorawan/app/app_lorawan.o \
./src/st/lorawan/app/lora_app.o 


# Each subdirectory must supply rules for building sources it contributes
src/st/lorawan/app/%.o: ../src/st/lorawan/app/%.c src/st/lorawan/app/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src/core" -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-st-2f-lorawan-2f-app

clean-src-2f-st-2f-lorawan-2f-app:
	-$(RM) ./src/st/lorawan/app/app_lorawan.d ./src/st/lorawan/app/app_lorawan.o ./src/st/lorawan/app/lora_app.d ./src/st/lorawan/app/lora_app.o

.PHONY: clean-src-2f-st-2f-lorawan-2f-app

