/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Gilday
 */

#include <iostream>

//Chapter 3, Exercise #10 - (Program that takes in an operation and two operands and then outputs the resultant.)
int main() {
  std::string operation;
  double a, b, math;
  std::cout << "Input an operation: ";
  std::cin >> operation;
  std::cout << "Input the first operand: ";
  std::cin >> a;
  std::cout << "Input the second operand: ";
  std::cin >> b;

  //Operation for addition.
  if(operation == "+" || operation == "plus"){
    math = a + b;
    std::cout << "The computed value of: " << a << "+" << b << " is " << math;
  }
  //Operation for subtraction.
  else if(operation == "-" || operation == "minus"){
    math = a-b;
    std::cout << "The computed value of: " << a << "-" << b << " is " << math;
  }
  //Operation for multiplication.
  else if(operation == "*" || operation == "mul"){
    math = a*b;
    std::cout << "The computed value of: " << a << "*" << b << " is " << math;
  }
  //Operation for division.
  else if(operation == "/" || operation == "div"){
    math = a/b;
    std::cout << "The computed value of: " << a << "/" << b << " is " << math;
  }
} 
