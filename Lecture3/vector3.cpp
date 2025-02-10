// L3/vector.cpp
// Use of iteratotrs with a vector
// Niels Walet, last updated 04/12/2019
#include <iostream>
#include <vector>
int main() 
{
  std::vector<double> v;
  for (size_t i{}; i<5; ++i)
    {
      v.push_back(i);
    }
  v.pop_back();
  std::cout<<v.size()<<std::endl;
  if (!v.empty())
    for(auto iterator=v.begin(); iterator!=v.end(); iterator++)
      {
        std::cout << *iterator <<std::endl;
      }
  v.clear();
}
