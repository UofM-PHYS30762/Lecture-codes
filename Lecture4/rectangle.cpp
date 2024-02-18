#include <iostream>
using namespace std;
// class example
class rectangle
{
  int x, y;
public:
  rectangle(): x{0},y{0} {};
  rectangle(int a, int b): x{a}, y{b} {};
  ~rectangle() {cout <<" deleting rectangle\n";}
  void val (int, int); // forward declaration
  int area ()  { return (x * y); }
};
//function declaration outside class
void rectangle::val (int a, int b) { x = a;  y = b; }
//MAIN
int main () {
  rectangle rectangle1 ;
  cout << "rectangle 1 has area: " << rectangle1.area()<<endl;
  rectangle rectangle2;
  rectangle2.val (3, 4);
  cout << "rectangle 2 has area: " << rectangle2.area()<<endl;
  return 0;
}
