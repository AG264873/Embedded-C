# stepin_project_264873

# Project Name: Heat Controller

# Activity 1

Switch 1           | Switch 2          | LED
-------------------|-------------------|-------------------
`OFF`              | `OFF`             |`OFF`
`OFF`              | `ON`              |`OFF`
`ON`               | `OFF`             |`OFF`
`ON`               | `ON`              |`ON`  
                                                                                                       
|OFF|OFF|OFF|ON|
|:--:|:--:|:--:|:--:|
|![image](https://user-images.githubusercontent.com/83201374/116531938-515a5980-a8fd-11eb-94bc-5e0a2c66d9ea.png)|![image](https://user-images.githubusercontent.com/83201374/116532077-7e0e7100-a8fd-11eb-803f-521a07c399f6.png)|![image](https://user-images.githubusercontent.com/83201374/116573118-2a664c80-a92a-11eb-9780-10ef3fa181f9.png)|![image](https://user-images.githubusercontent.com/83201374/116532408-d47baf80-a8fd-11eb-96ac-be001e17e5d2.png)|

# Activity 2

|Changes in RamTable with respect to Potentiometer|
|:----:|
|![image](https://user-images.githubusercontent.com/83201374/116531641-07717380-a8fd-11eb-9405-1b9301b05ca9.png)|

# Activity 3

|Showing PWM wave for various dutycycle on CRO|
|:----:|
|![image](https://user-images.githubusercontent.com/83201374/116440440-22e16d80-a86e-11eb-939f-e3ecede83d50.png)![image](https://user-images.githubusercontent.com/83201374/116440683-57edc000-a86e-11eb-9c12-9a9a9d297ccc.png)|

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_documentation`  | Doxygen and make file
`2_inc`            | Header File
`3_src`            | All activities 
`4_simulation`     | Simulatuion on SimulIde

## CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/AG264873/Embedded-C/actions/workflows/Compile.yml/badge.svg)](https://github.com/AG264873/Embedded-C/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/AG264873/Embedded-C/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/AG264873/Embedded-C/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/a1be445a6525487dad81df49aedd6d91)](https://www.codacy.com/gh/AG264873/Embedded-C/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=AG264873/Embedded-C&amp;utm_campaign=Badge_Grade)|

# Functions used
* User Defined Header File
* Compatibility with Windows and Linux

# Requirements
* MakeFile Configuration
* Mingw-w64(It runs on 64Bit but there is option for 32 bit too)
* avr-gcc compiler
* Additional Code::Blocks
  * Extension C/C++ 
  * Doxygen Extension
  * GDB/CDB Debugger Configuration
* Code Coverage
* CppCheck(Static memory analysis)

# Run Project
* In cmd/terminal at project implementation location
	* To Run Project
		1. Run "make"
	* To Check the code cppcheck
		1. Run "make analysis"
	* To delete all the executable files
		1. Run "make clean"


# Installation
* Fork the project
* Meet the Requirements
* Ready to Go!

# Usage
1. Run program
2. Follow Instruction display on Screen

# Credit

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved
-------|---------|----------------|----------------|---------------
`264873` | Arvind G. Mishra | Feature A, B etc    | Y yes     | Y yes 
