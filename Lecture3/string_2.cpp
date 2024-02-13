// L3/string_2.cpp
// What is the output of this code?
// Source: Prof. Niels Walet's code repository.
#include <iostream>
#include <string>
int main ()
{
  std::string str("steve jobs was a legend");
  str.erase(str.begin()+ 5, str.end()-7);
  std::cout<<str<< std::endl;
  return 0;
}

