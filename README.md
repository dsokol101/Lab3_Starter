# Lab: Sorting with vector<string>

## Overview

In this lab, you will use the C++ Standard Library container `vector<string>` instead of a C-style array.

## Notes

1. A template function named `myswap` is provided in the header (.h) file.  
   This function must be called from within your sorting function.

2. You will need to use pass-by-reference parameters (which we have not yet discussed in class).  
   The function headers are already written for you — you will implement the function bodies.

## Requirements

1. Replace any C-style arrays with `vector<string>`.

2. Your `sort` function must:
   - Sort the vector
   - Call the custom `myswap` function when needed

3. Optional: In a separate file, implement all functions using the `std::array<>` STL class.

## Compiling and Running

To compile and run the main program:

    make
    ./a.out

To compile and run the unit tests:

    make test

This command will:

- Compile `app.cpp` and `test.cpp`
- Produce the executable `a.out`
- Run the unit tests automatically

## Files Included

- app.cpp — functions tha tyou are writing for homework
- test.cpp — Unit tests
- lab3_main.cpp — Optional main for testing purposes
- lab3_array.cpp — Optional implementation using `std::array<>`
- test_swap.cpp — Contains a main function that tests `myswap`
- Makefile — Build configuration