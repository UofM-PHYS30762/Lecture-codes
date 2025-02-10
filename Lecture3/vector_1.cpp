// L3/vector_1.cpp
// What is the difference between these two vectors?
// Source: Prof. Niels Walet's code repository.
#include <iostream>
#include <vector>
int main() 
{
  std::vector<int> v1(1,2);
  std::vector<int> v2{1,2};
  std::cout << v1.size() <<" "<< v2.size()<<std::endl;
  return 0;
}
