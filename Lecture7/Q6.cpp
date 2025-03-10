// L7/Q6.cpp
// What happens if an element a is inherited twice?
// Adapted from geeksquiz.com
#include<iostream>
class Base 
{
protected:
  int a;
public:
  Base() {a = 0;}
};
class Derived1:  public Base 
{
public:
  int c1;
};
class Derived2:  public Base 
{
public:
  int c2;
};
class DerivedDerived: public Derived1, public Derived2 
{
public:
  void show() {std::cout << a <<std::endl;}
};
int main(void)
{
  DerivedDerived d;
  d.show();
  return 0;
}

