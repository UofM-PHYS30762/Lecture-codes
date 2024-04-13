// L10/Q1.cpp
// Niels Walet. Last edited 03/12/2019
#include<iostream>
int main()
{
  int x = -1;
  try {
    std::cout << "Inside try \n";
    if (x < 0){
	throw x;
	std::cout << "After throw \n";
      }
  }
  catch (int x ) {
    std::cout << "Exception Caught \n";
  }
  std::cout << "After catch \n";
  return 0;
}
