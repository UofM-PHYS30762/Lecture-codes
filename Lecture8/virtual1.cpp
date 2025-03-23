// L8/virtual1.cpp
// What does this code do?
// Niels Walet, last updated 04/12/2019
#include<iostream>
class Base {
public:
  virtual void show() { std::cout<<"In Base \n"; }
};
class Derived: public Base {
public:
  void show() { std::cout<<"In Derived \n"; }
};
int main(void) {
  Base *bp, b;
  Derived d;
  bp = &d;
  bp->show();
  bp = &b;
  bp->show();
  return 0;
}
