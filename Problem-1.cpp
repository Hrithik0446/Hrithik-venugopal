
/*Problem - 1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.
Calculator inputs : > ‘a’, ‘b’ and ‘type of operation’
Datatype : > ‘a’ = double, ‘b’ = double, ‘type of operation’ = string*/


//Solution for Problem-1.

#include <iostream>
#include <string>
#include "Problem-2.cpp"

class Calculator {
private:
    double a, b;
    std::string operation;

public:
    Calculator(double a, double b, std::string operation) {
        this->a = a;
        this->b = b;
        this->operation = operation;
    }

    void calculate() {
        if (operation == "add" || operation == "+") {
            std::cout << "Result: " << a + b << std::endl;
        }
        else if (operation == "subtract" || operation == "-") {
            std::cout << "Result: " << a - b << std::endl;
        }
        else if (operation == "multiply" || operation == "*") {
            std::cout << "Result: " << a * b << std::endl;
        }
        else if (operation == "divide" || operation == "/") {
            if (b != 0) {
                std::cout << "Result: " << a / b << std::endl;
            }
            else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
        }
        else {
            std::cout << "Invalid operation type" << std::endl;
        }
    }
};