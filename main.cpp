/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Gilday
 */

#include "main.h"

int main() {
  std::string operation;
  double a, b;
  std::cout << "Input an operation: ";
  std::cin >> operation;
  std::cout << "Input the first operand: ";
  std::cin >> a;
  std::cout << "Input the second operand: ";
  std::cin >> b;

  solution(operation, a, b);
}
