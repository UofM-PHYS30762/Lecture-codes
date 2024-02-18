// L4/rectangle2.cpp
// An example of the use of a rectangle class
// Niels Walet, last updated 05/02/2022
#include<iostream>
#include<string>
class rectangle
{
  int x, y;
public:
  //  rectangle(): x{},y{} {};
  //  rectangle(int a, int b): x{a}, y{b} {};
  //  ~rectangle() {cout <<" deleting rectangle\n";}
  void set_dimensions (int, int); // forward declaration
  int area ()  { return (x * y); }
};
//function declaration outside class
void rectangle::set_dimensions (int a, int b) { x = a;  y = b; }

int main () 
{
  rectangle rectangle1 ;
  std::cout << "rectangle 1 has area: " << rectangle1.area()<<std::endl;
  rectangle rectangle2;
  rectangle2.set_dimensions (3, 4);
  std::cout << "rectangle 2 has area: " << rectangle2.area()<<std::endl;
  return 0;
}
