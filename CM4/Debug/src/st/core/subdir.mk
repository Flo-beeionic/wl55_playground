################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/st/core/dma.c \
../src/st/core/ipcc.c \
../src/st/core/ipcc_if.c \
../src/st/core/stm32wlxx_hal_msp.c \
../src/st/core/stm32wlxx_hal_timebase_tim.c \
../src/st/core/stm32wlxx_it.c \
../src/st/core/sys_app.c 

C_DEPS += \
./src/st/core/dma.d \
./src/st/core/ipcc.d \
./src/st/core/ipcc_if.d \
./src/st/core/stm32wlxx_hal_msp.d \
./src/st/core/stm32wlxx_hal_timebase_tim.d \
./src/st/core/stm32wlxx_it.d \
./src/st/core/sys_app.d 

OBJS += \
./src/st/core/dma.o \
./src/st/core/ipcc.o \
./src/st/core/ipcc_if.o \
./src/st/core/stm32wlxx_hal_msp.o \
./src/st/core/stm32wlxx_hal_timebase_tim.o \
./src/st/core/stm32wlxx_it.o \
./src/st/core/sys_app.o 


# Each subdirectory must supply rules for building sources it contributes
src/st/core/%.o: ../src/st/core/%.c src/st/core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src/core" -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-st-2f-core

clean-src-2f-st-2f-core:
	-$(RM) ./src/st/core/dma.d ./src/st/core/dma.o ./src/st/core/ipcc.d ./src/st/core/ipcc.o ./src/st/core/ipcc_if.d ./src/st/core/ipcc_if.o ./src/st/core/stm32wlxx_hal_msp.d ./src/st/core/stm32wlxx_hal_msp.o ./src/st/core/stm32wlxx_hal_timebase_tim.d ./src/st/core/stm32wlxx_hal_timebase_tim.o ./src/st/core/stm32wlxx_it.d ./src/st/core/stm32wlxx_it.o ./src/st/core/sys_app.d ./src/st/core/sys_app.o

.PHONY: clean-src-2f-st-2f-core

