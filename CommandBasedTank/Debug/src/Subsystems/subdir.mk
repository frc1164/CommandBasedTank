################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Subsystems/ExampleSubsystem.cpp \
../src/Subsystems/TankDrive.cpp 

OBJS += \
./src/Subsystems/ExampleSubsystem.o \
./src/Subsystems/TankDrive.o 

CPP_DEPS += \
./src/Subsystems/ExampleSubsystem.d \
./src/Subsystems/TankDrive.d 


# Each subdirectory must supply rules for building sources it contributes
src/Subsystems/%.o: ../src/Subsystems/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-frc-linux-gnueabi-g++ -O0 -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


