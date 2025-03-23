// L9/gq1.cpp
// The use of static functions
// Niels Walet, Last modified 03/12/2019
// adapted from geeksquiz, aparently by pravasi meet
#include<iostream>
class Test
{
public:
  static void fun();
};
static void Test::fun()  
{
  std::cout<<"fun() is static\n";
}
int main()
{
  Test::fun();  
  return 0;
}
