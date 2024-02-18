// L4/union.cpp
// An example of the use of a union
// Niels Walet, last updated 05/01/2022
#include <iostream>
union numeric_type
{
    int         int_value;
    long        long_value;  
    double      double_value;  
};
int main()
{
  numeric_type values= {10};   // int_value = 10
  std::cout << values.int_value << std::endl;
  values.double_value = 3.1416;
  std::cout << values.double_value<<std::endl;
  std::cout << values.int_value<<std::endl;
}
