// L2/file.cpp
// Useful functiosn for handing data files
// Source: Prof. Niels Walet's code repository
#include<iostream>
int main()
{
  fstream myfile("data1");
  myfile.eof();//test for end of file
  myfile.good();//test if file state is okay
  myfile.fail();//test if last operation failed
  myfile.ignore();//ignore the next character
  myfile.clear();//clear fail bit
  myfile.close();//close the file
  myfile.peek();//look ahead to the next character (but do not read it)
  return 0;
}


