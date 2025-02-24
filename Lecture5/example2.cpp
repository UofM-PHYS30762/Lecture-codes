//Find Errors: L5/example2.cpp
//Source: MIT OpenCourseWare, Licence: CC BY-NC-SA 4.0
//Waring: this code may not follow our house style.
#include<iostream>
class Point
{
private:
  int x, y;
public:
  Point(int u, int v) : x(u), y(v) {}
  int getX(){return x;}
  int getY(){return y;}
  void doubleVal() {x *= 2; y *= 2;}
};

int main()
{
  const Point myPoint(5, 3)
  myPoint.doubleVal();
  std::cout << myPoint.getX() << " " << myPoint.getY() << "\n";
  return 0;
}


