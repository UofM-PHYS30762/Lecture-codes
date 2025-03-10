// L7/Q2.cpp
// A question about the order of execution for destructors
// Adapted from geeksquiz.com
#include<iostream>
class Base1 
{
public:
  Base1() {}
  ~Base1() { std::cout << "Base1's destructor called" << std::endl;  }
};
class Base2 
{
public:
  Base2() {}
  ~Base2() { std::cout << "Base2's destructor called" << std::endl;  }
};
class Derived: public Base1, public Base2 
{
public:
  Derived() {}
  ~Derived() { std::cout << "Derived's destructor called" << std::endl;  }
};
int main()
{
  Derived d;
  return 0;
}
