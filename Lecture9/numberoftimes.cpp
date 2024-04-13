// L9/numberoftimes.cpp
// Use of static variable insidefor loop
// Niels Walet, Last modified 03/12/2019
#include <iostream>
int main()
{
  for(int x{}; x<10; x++) {
    for(int y{}; y<10; y++)   {
      static int number_of_times{};
      number_of_times++;
      std::cout << number_of_times<<std::endl;
    }
  }
  return 0;
}
