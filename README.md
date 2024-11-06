# CPP Module 02

**A deep dive into Ad-hoc Polymorphism and Operator Overloading in C++.**

This project focuses on implementing a fixed-point number system and exploring operator overloading in C++. It includes exercises ranging from basic fixed-point number implementation to complex geometric calculations.

## Structure

### ex00/
The `ex00` directory implements basic fixed-point numbers:
- **Fixed.cpp**: Implementation of the Fixed class with basic functionality
- **Fixed.hpp**: Header file for the Fixed class
- **main.cpp**: Tests the basic Fixed class operations

### ex01/
The `ex01` directory adds floating-point conversions:
- **Fixed.cpp**: Extended Fixed class implementation
- **Fixed.hpp**: Updated header with new conversions
- **main.cpp**: Demonstrates floating-point number handling

### ex02/
The `ex02` directory implements operator overloading:
- **Fixed.cpp**: Fixed class with complete operator overloading
- **Fixed.hpp**: Header file with operator declarations
- **main.cpp**: Tests arithmetic and comparison operations

### ex03/
The `ex03` directory implements Binary Space Partitioning:
- **Fixed.cpp/hpp**: Final version of Fixed class
- **Point.cpp/hpp**: Point class implementation
- **bsp.cpp**: Binary Space Partitioning function
- **main.cpp**: Tests point inclusion in triangle

## Features

- **Fixed-Point Arithmetic**: Custom implementation of fixed-point numbers
- **Operator Overloading**: Complete set of arithmetic and comparison operators
- **Type Conversion**: Conversions between different number representations
- **Geometric Calculations**: Point and triangle calculations using BSP

## Usage

To compile each exercise, navigate to its directory and run:
```bash
make
```

### Running the Programs

For ex00-ex02 (Fixed Point Numbers):
```bash
./fixed
```

For ex03 (BSP):
```bash
./bsp
```

## Compilation

All exercises are compiled with:
```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp
```

## Learning Objectives

- Understanding ad-hoc polymorphism in C++
- Implementing operator overloading
- Working with fixed-point numbers
- Understanding the Orthodox Canonical Form
- Implementing geometric algorithms
- Memory management in C++
