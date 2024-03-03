// L6/fac.cpp
// Calculate factorial by recursion
// Source: Prof. Niels Walet's code repository
#include<iostream>
double factorial(const int n){
  if (n<0){
    std::cout<<" factorial of negative number";
    throw("factorial of negative number");
  }
  if (n==0) return 1;
  return n*factorial(n-1);
}
int main()
{
  std::cout <<10<<"!="<<factorial(10)<<std::endl;
  std::cout <<20<<"!="<<factorial(20)<<std::endl;
  std::cout <<40<<"!="<<factorial(40)<<std::endl;
  return 0;
}
