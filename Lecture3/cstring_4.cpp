// L3/cstring_4.cpp
// What happens with this C-strings?
// Source: Prof. Niels Walet's code repository.
#include <iostream>
#include <cstring>
int main ()
{
  char string1[10] = "Hello";
  char string2[10] = "World";
  char string3[10];
  strcpy( string3, string1);
  strcat( string1, string2);
  std::cout << strlen(string1)<<" "<<string1 << std::endl;
  return 0;
}
