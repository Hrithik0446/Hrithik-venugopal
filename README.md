# Hrithik-venugopal

This repository contains solutions for all 4 problems in C++ Programming language involving control flow, loops, functions, and data structures.
All four problems are implemented and called from a single main() function. Uncomment the function call you want to test

This structure helps reduce code duplication and makes it easier to run and test all problems from one place.

---

## Problem 1
**Description**:  
Create a calculator class that takes two `double` inputs and a string describing the operation (`add` or `+`, `subtract` or `-`, `multiply` or `*`, `divide` or `/`) and returns the result.

**Input**:
a (double): First operand
b (double): Second operand
operation (string): Type of operation

**Output**:  
Result of the calculation or an error message for invalid operation or division by zero.

**Example**:
Input: a = 10, b = 5, operation = "divide"
Output: Result: 2


## Problem 2
**Description**:
With a single integer input a, print the first a odd numbers.

**Input**:
a (int): Number of odd numbers to generate

**Output**:
Series of first a odd numbers

**Example**:
Input: a = 4
Output: 1, 3, 5, 7


## Problem 3
**Description**:
Similar to Problem 2, but with a condition:
If a is odd → print first a odd numbers
If a is even → print first a - 1 odd numbers

**Inputs**:
a (int)

**Output**:
Odd number series depending on parity of a

**Example**:
Input: a = 3 → Output: 1, 3, 5
Input: a = 4 → Output: 1, 3, 5


## Problem 4
**Description**:
Given a list of numbers, count how many are divisible by each of the digits 1–9.

**Inputs**:
vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

**Output**:
A map containing counts of multiples for each number from 1 to 9.

**Example**:
Output: {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}



