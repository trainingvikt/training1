################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/hello.cpp \
../src/hello_test.cpp \
../src/step.cpp 

CPP_DEPS += \
./src/hello.d \
./src/hello_test.d \
./src/step.d 

OBJS += \
./src/hello.o \
./src/hello_test.o \
./src/step.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/hello.d ./src/hello.o ./src/hello_test.d ./src/hello_test.o ./src/step.d ./src/step.o

.PHONY: clean-src

