//L5/pointer_functionreturn.cpp
//Returning a pointer from the function
#include <iostream>

int* create_array(int size)
{
  //Dynamically allocate an array of integers
  int* arr = new int[size];

  //Initialize the array elements
  for (int i = 0; i < size; ++i)
  {
    arr[i] = i * 10;
  }

  // Return the pointer to the array
  return arr;
}

int main()
{
  // Create an array of size 5
  int* myArray = create_array(5);
  
  // Print the values of the array
  for (int i = 0; i < 5; ++i)
  {
    std::cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
  }

  //deallocate the memory to prevent memory leaks
  delete[] myArray;

  return 0;
}



