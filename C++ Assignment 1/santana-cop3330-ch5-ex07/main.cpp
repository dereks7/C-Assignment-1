#include <iostream>
#include <math.h>
#include "std_lib_facilities.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Derek Santana
*/

void check(double xp, double xm, double a, double b, double c)
{
  std:: cout<< "\n\nWe can double check if the roots are correct by plugging them into\n";
  std:: cout<< "ax^2+bx+c. if the equation equals 0, then it is a real root!\n\n";

  double xpluseqn = (a*(xp*xp))+(b*xp)+c;
  double xminuseqn = (a*(xm*xm))+(b*xm)+c;

  if(xpluseqn == 0)
  {
    std:: cout<< "for x1 = " << xp <<" : " << a <<"(" << xp << "*"<<xp<<")";
    std:: cout<<"+"<<b<<"("<<xp<<")"<<"+"<<c<<" = "<< xpluseqn << "\n";
    std::cout<<xp<<" IS A REAL ROOT!\n";
  }
  else
  {
    std:: cout<<"equation does not = 0. not real roots.";
  }

  if(xminuseqn == 0)
  {
    std:: cout<< "for x2 = " << xm <<" : " << a <<"(" << xm << "*"<<xm<<")";
    std:: cout<<"+"<<b<<"("<<xm<<")"<<"+"<<c<<" = "<< xminuseqn << "\n";
    std::cout<<xp<<" IS A REAL ROOT!\n";
  }
  else
  {
    std:: cout<<"equation does not = 0. not real roots.";
  }
}

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

  std:: cout<<"\nThe real roots of the quadratic equation are:\n";
  std:: cout<<"x1 = " <<xplus<<"\nx2 = "<< xminus;

  check(xplus,xminus,a,b,c);
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