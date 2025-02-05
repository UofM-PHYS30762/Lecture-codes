// L2/square.cpp
// compare two function calls
// Source: Prof. Niels Walet's code repository
#include<iostream>
void square1(double& a){a=a*a;}
void square2(double a){a=a*a;}
int main()
{
  double x{4.};
  double y{4.};
  square1(x);
  square2(y);
  std::cout <<x<<" "<<y<<std::endl;
  return 0;
}


