################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/st/mbmux/LmHandler_mbwrapper.c \
../src/st/mbmux/mbmux.c \
../src/st/mbmux/mbmuxif_lora.c \
../src/st/mbmux/mbmuxif_radio.c \
../src/st/mbmux/mbmuxif_sys.c \
../src/st/mbmux/mbmuxif_trace.c \
../src/st/mbmux/radio_mbwrapper.c 

C_DEPS += \
./src/st/mbmux/LmHandler_mbwrapper.d \
./src/st/mbmux/mbmux.d \
./src/st/mbmux/mbmuxif_lora.d \
./src/st/mbmux/mbmuxif_radio.d \
./src/st/mbmux/mbmuxif_sys.d \
./src/st/mbmux/mbmuxif_trace.d \
./src/st/mbmux/radio_mbwrapper.d 

OBJS += \
./src/st/mbmux/LmHandler_mbwrapper.o \
./src/st/mbmux/mbmux.o \
./src/st/mbmux/mbmuxif_lora.o \
./src/st/mbmux/mbmuxif_radio.o \
./src/st/mbmux/mbmuxif_sys.o \
./src/st/mbmux/mbmuxif_trace.o \
./src/st/mbmux/radio_mbwrapper.o 


# Each subdirectory must supply rules for building sources it contributes
src/st/mbmux/%.o: ../src/st/mbmux/%.c src/st/mbmux/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src/core" -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-st-2f-mbmux

clean-src-2f-st-2f-mbmux:
	-$(RM) ./src/st/mbmux/LmHandler_mbwrapper.d ./src/st/mbmux/LmHandler_mbwrapper.o ./src/st/mbmux/mbmux.d ./src/st/mbmux/mbmux.o ./src/st/mbmux/mbmuxif_lora.d ./src/st/mbmux/mbmuxif_lora.o ./src/st/mbmux/mbmuxif_radio.d ./src/st/mbmux/mbmuxif_radio.o ./src/st/mbmux/mbmuxif_sys.d ./src/st/mbmux/mbmuxif_sys.o ./src/st/mbmux/mbmuxif_trace.d ./src/st/mbmux/mbmuxif_trace.o ./src/st/mbmux/radio_mbwrapper.d ./src/st/mbmux/radio_mbwrapper.o

.PHONY: clean-src-2f-st-2f-mbmux

