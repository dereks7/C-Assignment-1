#include <iostream>
#include <string>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Derek Santana
 */
 
int main() 
{
  double num1,num2;
  std:: string n1, n2;
  char op;

  std:: cout << "\t--- MINI CALCULATOR FOR ONLY SINGLE DIGIT NUMBERS ---\n--- enter number then operand then number separated by spaces ---\n";

  std:: cin >> n1 >> op >> n2;

  // n1 -> input number or if spelled out

  if(n1 == "0" || n1 == "zero")
  {
    num1=0;
  }
  else if(n1 == "1" || n1 == "one")
  {
    num1=1;
  }
  else if(n1 == "2" || n1 == "two")
  {
    num1=2;
  }
  else if(n1 == "3" || n1 == "three")
  {
    num1=3;
  }
  else if(n1 == "4" || n1 == "four")
  {
    num1=4;
  }
  else if(n1 == "5" || n1 == "five")
  {
    num1=5;
  }
  else if(n1 == "6" || n1 == "six")
  {
    num1=6;
  }
  else if(n1 == "7" || n1 == "seven")
  {
    num1=7;
  }
  else if(n1 == "8" || n1 == "eight")
  {
    num1=8;
  }
  else if(n1 == "9" || n1 == "nine")
  {
    num1=9;
  }

  // n2 -> input number or if spelled out
  
  if(n2 == "0" || n2 == "zero")
  {
    num2=0;
  }
  else if(n2 == "1" || n2 == "one")
  {
    num2=1;
  }
  else if(n2 == "2" || n2 == "two")
  {
    num2=2;
  }
  else if(n2 == "3" || n2 == "three")
  {
    num2=3;
  }
  else if(n2 == "4" || n2 == "four")
  {
    num2=4;
  }
  else if(n2 == "5" || n2 == "five")
  {
    num2=5;
  }
  else if(n2 == "6" || n2 == "six")
  {
    num2=6;
  }
  else if(n2 == "7" || n2 == "seven")
  {
    num2=7;
  }
  else if(n2 == "8" || n2 == "eight")
  {
    num2=8;
  }
  else if(n2 == "9" || n2 == "nine")
  {
    num2=9;
  }
  
  if(op == '+')
  {
    std:: cout << "The sum of "<< num1 << " and "<< num2 << " is " << num1+num2;
  }
  else if(op == '-')
  {
    std:: cout << "The difference of "<< num1 << " and "<< num2 << " is " << num1-num2;
  }
  else if(op == '*')
  {
    std:: cout << "The product of "<< num1 << " and "<< num2 << " is " << num1*num2;
  }
  else if(op == '/')
  {
    std:: cout<< "The quotient of "<< num1 << " and "<< num2 << " is " << num1/num2;
  }
}