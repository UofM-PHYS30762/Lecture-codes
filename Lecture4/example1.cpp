//Find Errors: L4/example1.cpp
//Source: MIT OpenCourseWare, Licence: CC BY-NC-SA 4.0
//Warning: this code may not follow our house style.
#include<iostream>
class Point
{
private:
  int x, y;
public:
  Point(int u, int v) : x(u), y(v) {}
  int getX(){return x;}
  int getY(){return y;}
};

int main()
{
  Point myPoint(5, 3);
  std::cout << myPoint.x << " " << myPoint.y<< "\n";
  return 0;
}


