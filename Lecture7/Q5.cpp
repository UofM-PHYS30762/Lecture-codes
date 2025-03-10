// L7/Q5.cpp
// Is this legal?
// Adapted from geeksquiz.com
#include<iostream>
#include<string>
class Base
{
public:
    int x, y;
public:
    Base(int i, int j):x{i}, y{j} {}
};
class Derived : public Base
{
public:
  Derived(int i, int j):x{i}, y{j} {}
  
  void print() {std::cout << x <<" "<< y<<std::endl; }
};
int main(void)
{
  Derived q{10,10};
  q.print();
  return 0;
}
