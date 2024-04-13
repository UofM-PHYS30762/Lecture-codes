// L10/Q2.cpp
// Niels Walet. Last edited 03/12/2019
#include<iostream>
class Base {};
class Derived: public Base {};
int main()
{
   Derived d;
   try {
       throw d;
   }
   catch(Base b) {
     std::cout<<"Caught Base Exception"<<std::endl;
   }
   catch(Derived d) {
     std::cout<<"Caught Derived Exception"<<std::endl;
   }
   return 0;
}
