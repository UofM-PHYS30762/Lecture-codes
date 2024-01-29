//L1/variable.cpp 
//For practice: correct error(s)(PHYS30762)
//Charanjit Kaur, 28/01/24
#include <iostream>
int main()
{
  int a{5};
  int b;
  b=5;
  const int c1{2};
  c1=5;
  std::cout<<"Value of a is  "<<a<<std::endl;
  std::cout<<"Value of b is  "<<b<<std::endl;
  std::cout<<"Value of c1 is "<<c1<<std::endl;
  return 0;
}


