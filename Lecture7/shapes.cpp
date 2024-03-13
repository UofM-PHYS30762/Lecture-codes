// L7/shapes.cpp
// The shapes class hierarchy
// Source: Prof. Niels Walet's code repository
#include<iostream>
#include<cmath>
#include<string>
class shape
{
protected:
  double area;
  int sides;
public:
  shape() : area{}, sides{} {}
  shape(double a,int no_sides) : area{a}, sides{no_sides} {}
  ~shape(){}
  void print_info(){ std::cout <<"area="<<area; }
};
class triangle: public shape
{
private:
  double side_a,side_b,side_c;
public:
  triangle() : shape{0,3}, side_a{}, side_b{}, side_c{} {} ;
  triangle(double a, double b, double c) : side_a{a},side_b{b},side_c{c} {
    double s=(side_a+side_b+side_c)/2;
    shape::area=sqrt(s*(s-side_a)*(s-side_b)*(s-side_c));
  };    //use Heron's formula to calculate area
  ~triangle() {};
  void print_info()  {
    std::cout<<"triangle, sides("<<side_a
	     <<", "<<side_b<<", "<<side_c<<")"<<std::endl;
    shape::print_info();
  }
};
class isosceles_triangle: public triangle
{
public:
  isosceles_triangle()  {};
  isosceles_triangle(double side) : 
    triangle{side, side, side} {};
  ~isosceles_triangle() {};
   void print_info()  {
     std::cout<<"isosceles ";
     triangle::print_info();
   }
};
int main(){
  isosceles_triangle t{1};
  t.print_info();
  std::cout<<std::endl;
  return 0;
}
