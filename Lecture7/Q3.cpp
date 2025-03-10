// L7/Q3.cpp
// A question about the size of class that inherits Base twice
// Adapted from geeksquiz.com
#include<iostream>
class Base 
{
  int arr[10];
};
class Base1: public Base { };
class Base2: public Base { };
class Derived: public Base1, public Base2 {};
int main()
{
  std::cout << sizeof(Derived)<<std::endl;
  return 0;
}


