################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../src/core/vendor/startup_stm32wl55jcix.s 

S_DEPS += \
./src/core/vendor/startup_stm32wl55jcix.d 

OBJS += \
./src/core/vendor/startup_stm32wl55jcix.o 


# Each subdirectory must supply rules for building sources it contributes
src/core/vendor/%.o: ../src/core/vendor/%.s src/core/vendor/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src/core" -I"C:/Users/shang/OneDrive/Beeionic/Sandbox/essaiWb/Yggdrasil/wl55_playground_2/CM4/src" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-src-2f-core-2f-vendor

clean-src-2f-core-2f-vendor:
	-$(RM) ./src/core/vendor/startup_stm32wl55jcix.d ./src/core/vendor/startup_stm32wl55jcix.o

.PHONY: clean-src-2f-core-2f-vendor

