#include <iostream>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Derek Santana
 */
 
int main() 
{
  int num1,num2;
  std::string op;

  std:: cout << "Input an operation and then two operands\n";
  std:: cin >> op;
  std:: cin >> num1;
  std:: cin >> num2;

  if(op == "*")
  {
    std:: cout << num1*num2;
  }
  else if(op == "+")
  {
    std:: cout << num1+num2;
  }
  else if(op == "-")
  {
    std:: cout << num1-num2;
  }
  else if(op == "/")
  {
    std:: cout << num1/num2;
  }
  else if(op == "%")
  {
    std:: cout << num1%num2;
  }
}