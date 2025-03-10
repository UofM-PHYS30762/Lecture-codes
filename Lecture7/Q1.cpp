// L7/Q1.cpp
// A question about the order of call of constructors
// Adapted from geeksquiz.com
#include<iostream>
#include<string>
class Base1 
{
public:
  Base1() {std::cout << "Base1's constructor called" << std::endl;}
};
class Base2 
{
public:
  Base2() {std::cout << "Base2's constructor called" << std::endl;}
};
class Derived: public Base1, public Base2 
{
public:
  Derived() {std::cout << "Derived's constructor called" << std::endl;}
};
int main()
{
  Derived d;
  return 0;
}
