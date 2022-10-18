################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Generated_Code/BitIoLdd1.c" \
"../Generated_Code/BitIoLdd2.c" \
"../Generated_Code/BitsIoLdd1.c" \
"../Generated_Code/BitsIoLdd2.c" \
"../Generated_Code/Cpu.c" \
"../Generated_Code/Data.c" \
"../Generated_Code/INC.c" \
"../Generated_Code/PE_LDD.c" \
"../Generated_Code/Set.c" \
"../Generated_Code/TRIGER.c" \
"../Generated_Code/Vectors.c" \

C_SRCS += \
../Generated_Code/BitIoLdd1.c \
../Generated_Code/BitIoLdd2.c \
../Generated_Code/BitsIoLdd1.c \
../Generated_Code/BitsIoLdd2.c \
../Generated_Code/Cpu.c \
../Generated_Code/Data.c \
../Generated_Code/INC.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/Set.c \
../Generated_Code/TRIGER.c \
../Generated_Code/Vectors.c \

OBJS += \
./Generated_Code/BitIoLdd1.o \
./Generated_Code/BitIoLdd2.o \
./Generated_Code/BitsIoLdd1.o \
./Generated_Code/BitsIoLdd2.o \
./Generated_Code/Cpu.o \
./Generated_Code/Data.o \
./Generated_Code/INC.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/Set.o \
./Generated_Code/TRIGER.o \
./Generated_Code/Vectors.o \

C_DEPS += \
./Generated_Code/BitIoLdd1.d \
./Generated_Code/BitIoLdd2.d \
./Generated_Code/BitsIoLdd1.d \
./Generated_Code/BitsIoLdd2.d \
./Generated_Code/Cpu.d \
./Generated_Code/Data.d \
./Generated_Code/INC.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/Set.d \
./Generated_Code/TRIGER.d \
./Generated_Code/Vectors.d \

OBJS_QUOTED += \
"./Generated_Code/BitIoLdd1.o" \
"./Generated_Code/BitIoLdd2.o" \
"./Generated_Code/BitsIoLdd1.o" \
"./Generated_Code/BitsIoLdd2.o" \
"./Generated_Code/Cpu.o" \
"./Generated_Code/Data.o" \
"./Generated_Code/INC.o" \
"./Generated_Code/PE_LDD.o" \
"./Generated_Code/Set.o" \
"./Generated_Code/TRIGER.o" \
"./Generated_Code/Vectors.o" \

C_DEPS_QUOTED += \
"./Generated_Code/BitIoLdd1.d" \
"./Generated_Code/BitIoLdd2.d" \
"./Generated_Code/BitsIoLdd1.d" \
"./Generated_Code/BitsIoLdd2.d" \
"./Generated_Code/Cpu.d" \
"./Generated_Code/Data.d" \
"./Generated_Code/INC.d" \
"./Generated_Code/PE_LDD.d" \
"./Generated_Code/Set.d" \
"./Generated_Code/TRIGER.d" \
"./Generated_Code/Vectors.d" \

OBJS_OS_FORMAT += \
./Generated_Code/BitIoLdd1.o \
./Generated_Code/BitIoLdd2.o \
./Generated_Code/BitsIoLdd1.o \
./Generated_Code/BitsIoLdd2.o \
./Generated_Code/Cpu.o \
./Generated_Code/Data.o \
./Generated_Code/INC.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/Set.o \
./Generated_Code/TRIGER.o \
./Generated_Code/Vectors.o \


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/BitIoLdd1.o: ../Generated_Code/BitIoLdd1.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitIoLdd1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitIoLdd1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/BitIoLdd2.o: ../Generated_Code/BitIoLdd2.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitIoLdd2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitIoLdd2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/BitsIoLdd1.o: ../Generated_Code/BitsIoLdd1.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitsIoLdd1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitsIoLdd1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/BitsIoLdd2.o: ../Generated_Code/BitsIoLdd2.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitsIoLdd2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitsIoLdd2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Cpu.o: ../Generated_Code/Cpu.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Cpu.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Cpu.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Data.o: ../Generated_Code/Data.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Data.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Data.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/INC.o: ../Generated_Code/INC.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/INC.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/INC.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PE_LDD.o: ../Generated_Code/PE_LDD.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PE_LDD.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PE_LDD.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Set.o: ../Generated_Code/Set.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Set.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Set.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TRIGER.o: ../Generated_Code/TRIGER.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/TRIGER.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/TRIGER.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Vectors.o: ../Generated_Code/Vectors.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Vectors.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Vectors.o"
	@echo 'Finished building: $<'
	@echo ' '


