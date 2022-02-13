################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/yggdrasil/kernel/Event.cpp \
../src/yggdrasil/kernel/Mutex.cpp \
../src/yggdrasil/kernel/Scheduler.cpp \
../src/yggdrasil/kernel/Task.cpp 

OBJS += \
./src/yggdrasil/kernel/Event.o \
./src/yggdrasil/kernel/Mutex.o \
./src/yggdrasil/kernel/Scheduler.o \
./src/yggdrasil/kernel/Task.o 

CPP_DEPS += \
./src/yggdrasil/kernel/Event.d \
./src/yggdrasil/kernel/Mutex.d \
./src/yggdrasil/kernel/Scheduler.d \
./src/yggdrasil/kernel/Task.d 


# Each subdirectory must supply rules for building sources it contributes
src/yggdrasil/kernel/%.o: ../src/yggdrasil/kernel/%.cpp src/yggdrasil/kernel/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src/core" -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -std=gnu++17 -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-yggdrasil-2f-kernel

clean-src-2f-yggdrasil-2f-kernel:
	-$(RM) ./src/yggdrasil/kernel/Event.d ./src/yggdrasil/kernel/Event.o ./src/yggdrasil/kernel/Mutex.d ./src/yggdrasil/kernel/Mutex.o ./src/yggdrasil/kernel/Scheduler.d ./src/yggdrasil/kernel/Scheduler.o ./src/yggdrasil/kernel/Task.d ./src/yggdrasil/kernel/Task.o

.PHONY: clean-src-2f-yggdrasil-2f-kernel

