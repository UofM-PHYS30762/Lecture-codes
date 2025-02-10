// L3/vector2.cpp
// What effect has resize on a vector?
// Niels Walet, last updated 04/12/2019
#include <iostream>
#include <vector>
int main() 
{
  std::vector<double> v;
  v.resize(5);
  std::cout << v[3]<<std::endl;
}


