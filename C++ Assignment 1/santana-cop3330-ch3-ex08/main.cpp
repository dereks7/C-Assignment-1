#include <iostream>
#include "std_lib_facilities.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Derek Santana
 */

int main() 
{
  int num;

  std:: cout << "Input a number\n";
  std:: cin >> num;
  
  if(num%2 == 0)
  {
    std:: cout << "The value " << num << " is an even number";
  }
  else
  {
    std:: cout << "The value " << num << " is an odd number";
  }
} 