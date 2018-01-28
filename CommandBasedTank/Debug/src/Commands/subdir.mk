################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/CustomDriveWithXbox.cpp \
../src/Commands/Drive.cpp \
../src/Commands/ExampleCommand.cpp \
../src/Commands/MyAutoCommand.cpp 

OBJS += \
./src/Commands/CustomDriveWithXbox.o \
./src/Commands/Drive.o \
./src/Commands/ExampleCommand.o \
./src/Commands/MyAutoCommand.o 

CPP_DEPS += \
./src/Commands/CustomDriveWithXbox.d \
./src/Commands/Drive.d \
./src/Commands/ExampleCommand.d \
./src/Commands/MyAutoCommand.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-frc-linux-gnueabi-g++ -O0 -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


