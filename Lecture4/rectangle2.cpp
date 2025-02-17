// L4/rectangle2.cpp
// An example of the use of a rectangle class
// Source: Prof. Niels Walet's repository
//last updated by CK 15/02/2025
#include<iostream>
#include<string>
class Rectangle
{
  int x, y;
public:
  //  Rectangle(): x{},y{} {};
  //  Rectangle(int a, int b): x{a}, y{b} {};
  //  ~Rectangle() {cout <<" deleting rectangle\n";}
  void set_dimensions(int, int); // forward declaration
  int area ()  { return (x * y); }
};
//function declaration outside class
void Rectangle::set_dimensions (int a, int b) { x = a;  y = b; }

int main () 
{
  Rectangle rectangle1;
  std::cout << "rectangle 1 has area: " << rectangle1.area()<<std::endl;
  Rectangle rectangle2;
  rectangle2.set_dimensions(3, 4);
  std::cout << "rectangle 2 has area: " << rectangle2.area()<<std::endl;
  return 0;
}
