// L9/anonymous.cpp
// Anonymous namespace
// Niels Walet, Last modified 04/12/2019
namespace { 
  int cannot_access_outside_this_file() { return 0; }
} 

int main()
{
  int k= cannot_access_outside_this_file();
  return 0;
}
