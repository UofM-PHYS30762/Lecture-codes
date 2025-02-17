#include <iostream>
using namespace std;
// class example
class Rectangle
{
  int x, y;
public:
  Rectangle(): x{0},y{0} {};
  Rectangle(int a, int b): x{a}, y{b} {};
  ~Rectangle() {cout <<" deleting rectangle\n";}
  void val(int, int); // forward declaration
  int area()  { return (x * y); }
};
//function declaration outside class
void Rectangle::val(int a, int b) { x = a;  y = b; }
//MAIN
int main () 
{
  Rectangle rectangle1 ;
  cout << "rectangle 1 has area: " << rectangle1.area()<<endl;
  Rectangle rectangle2;
  rectangle2.val (3, 4);
  cout << "rectangle 2 has area: " << rectangle2.area()<<endl;
  return 0;
}
