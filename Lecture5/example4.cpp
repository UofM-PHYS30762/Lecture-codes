//Find Errors: L5/example4.cpp
//Source: MIT OpenCourseWare, Licence: CC BY-NC-SA 4.0
#include<iostream>


int main()
{
  int size;
  std::cout<<"Enter size"<<std::endl;
  std::cin>>size;

  int *numbers = new int[size];

  for(int i=0; i<size; ++i)
  {
    std::cin>>numbers[i];
  }

  // some calcuations with numbers
  
  delete numbers;

  return 0;
}


