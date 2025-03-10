#include<iostream>
#include<cmath>
#include<string>
class Shape
{
protected:
  double area;
  int sides;
public:
  Shape() : area{}, sides{} {}
  Shape(double a,int no_sides) : area{a}, sides{no_sides} {}
  ~Shape(){}
  void print_info(){ std::cout <<"area="<<area; }
};

int main()
{
  Shape t{1,3};
  t.print_info();
  std::cout<<std::endl;
  
  return 0;
}
