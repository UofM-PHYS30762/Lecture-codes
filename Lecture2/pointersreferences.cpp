//L2/pointersreferences.cpp
//Pointers and References
//Original Source: Prof. Niels Walet's code repository
//Last modified by Charanjit Kaur, 31.01.2024
#include <iostream>
#include <string>
int main()
{
  int a{4};
  int b{5};
  int& rs = a;         // rs refers to a
  int* ps = &a;        // ps points to a
  std::cout<<"rs is "<<rs<<std::endl;
  rs = b; // rs still refers to a,but a's value is now "5"
  std::cout<<"rs is "<<rs<<std::endl;
  std::cout<<"*ps is "<<*ps<<std::endl; //note value of "a" got updated in the previous step
  ps = &b;   // ps now points to b;
  std::cout<<"*ps is "<<*ps<<std::endl;
  return 0;
}


