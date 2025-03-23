// L9/temp1.cpp
// Use of static variable insided function body
// Niels Walet, Last modified 03/12/2019
#include<iostream>
template <typename T>
void fun(const T&x)
{
  static int count = 0;
  std::cout << "x = " << x << " count = " << count << std::endl;
  ++count;
  return;
}
int main()
{
  fun<int>(1);
  fun<int>(1);
  fun<double>(1.1);
  return 0;
}

