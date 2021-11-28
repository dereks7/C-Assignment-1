#include <iostream>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Derek Santana
*/

void f(const int);
void f2(const int);
void f3(int,int);

void f(const int n)
{
  std:: cout <<"- This is the f(const int n) function output: "<< n << "\n\n";
}

void f2(const int n, int m)
{
  m = m*n;
  std:: cout <<"- This is the f2(const int n, int m) function output: n = "<< n << " m = m*n = " << m<<"\n\n";
}

void f3( int n, int m)
{
  m = n * m;
  std:: cout <<"- This is the f3(int n, int m) function output: n = "<< n << " m = n * m = " << m;
}


int main() 
{
  std::cout << "Can we declare a non-reference function argument \"const\"\n";
  std::cout<< "(e.g. , void f(const int);)?\n\n";

  std:: cout << "Yes we can!\n\n";

  std::cout<< "What might that mean?\n\n";

  std:: cout << "If we were to pass 5 to voidf(const int) then we would not be able to change the value of that number we passed, since it is constant. Here I pass it to the function and we still get 5\n";
  
  f(5);

  std::cout<< "Why might we want to do that?\n\n";

  std:: cout << "We might want to do that if we wanted to give the computer very simple instrcutions and wanted to make sure the value we pass would not change and would stay static. For instance if you made the const int the size of an array and did not want it to ever change, you could use const int to do that. In this function f2(const int n, int m) I will pass 5 for both n and m, and I will update m but not n since it will not let me.\n";

  f2(5, 5);


  std::cout<< "Why don't people do that often?\n\n";

  std:: cout << "People do not do that often because it is much easier to just type int n = 5 and jus tnever update it. And in some cases it is unneccesary to use const int, especially in a very simple function for very simple math. I will call f3(int n, int m) with f(5,5) to show you that it is easy to keep the value of n as 5. I will keep n but use it to multiply m by n. \n";

  f3(5,5);
} 