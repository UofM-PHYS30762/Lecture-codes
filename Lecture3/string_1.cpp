// L3/string_1.cpp
// What is the output of this code?
// Source: Prof. Niels Walet's code repository.
#include <iostream>
#include <string>
using namespace std;
int main ()
{
  std::string str ("Abacadaba");
  for (auto r=str.rbegin() ; r < str.rend(); r++ )
    std::cout << *r;
  std::cout <<std::endl;
  return 0;
}
