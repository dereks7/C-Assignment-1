#include <iostream>
#include <math.h>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Derek Santana
*/

void roots(double a, double b, double c)
{
  double n1 = (b*b)-4*(a*c);
  double squareroot = sqrt(n1);

  if(n1 < 0)
  {
    std:: cout<< "ERROR! b^2-4ac is less than 0";
    return;
  }
  double xplus = ((b*-1) + squareroot)/(2*a);
  double xminus = ((b*-1) - squareroot)/(2*a);

  std:: cout<<"The real roots of the quadratic equation are:\n";
  std:: cout<<"x1 = " <<xplus<<"\nx2 = "<< xminus;
}

int main() 
{
  double a,b,c;
  
  std:: cout<< "\t-b + or - √b^2-4ac\n";
  std:: cout<< "x =\t--------------------\n";
  std:: cout<< "\t\t\t2a\n";
  std:: cout << "Input a quadratic equation of form:\nax^2+bx+c for a, b, and c\n";
  std:: cout << "a: ";
  std:: cin >> a;
  std:: cout << "b: ";
  std:: cin >> b;
  std:: cout << "c: ";
  std:: cin >> c;

  roots(a,b,c);
}