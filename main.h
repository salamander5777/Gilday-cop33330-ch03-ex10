/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Gilday
 */

#include <iostream>

//Chapter 3, Exercise #10 - (Program that takes in an operation and two operands and then outputs the resultant.)

//This method verifies the input of the operation, and will solve for the solution.
void solution(std::string operation, double a, double b){
  double math;

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
