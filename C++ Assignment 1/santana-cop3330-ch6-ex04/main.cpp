#include <iostream>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Derek Santana
*/

class Name_value
{
  public:
  std:: string name;
  int val;
};

int main() 
{
  Name_value nv[100];
  int count=-1;

  std:: cout<< "Enter a name and value (Terminate Input with \"NoName 0\")\n";
  std:: cout<< "separate by spaces\n";

  for(int i =  0; i < 100; i++)
  {
    std:: cin >> nv[i].name >> nv[i].val;

    for (int j = 0; j<100; j++)
    {
      if(nv[i].name == nv[j].name && i != j)
      {
        std:: cout<<"ERROR! DUPLICATE NAME\n";
        count=i;
        break;
      }
      else
      {
        continue;
      }
    }
    if(nv[i].name == "NoName" && nv[i].val == 0)
    {
      count = i;
      std:: cout << "Terminated Input\n";
      break;
    }
    if(count == i)
    {
      break;
    }
  }

  std:: cout<< "\nList of names and values:";

  for(int i=0; i<count;i++)
  {
    if(count == i)
    {
      continue;
    }
    else
    {
      std:: cout <<"\n" <<nv[i].name << " " <<nv[i].val;
    }
  }
}