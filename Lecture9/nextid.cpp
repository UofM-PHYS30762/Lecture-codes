// L9/next_id.cpp
// Use of static variable in class
// Niels Walet, Last modified 24/04/2022
#include <iostream>
class CountUse
{
private:
  static int users;
public:
  static int increment_users() {users++; return users;}   
  /* .... */
  CountUse() {users++;}
};
int CountUse::users{0};
int main()
{
  CountUse a; //these are different instances of the class CountUse
  CountUse a1; //but they act on the same static variable

  std::cout <<a.increment_users() <<" "
	    <<a.increment_users() <<" "
	    <<a.increment_users() <<" "
	    <<std::endl;
  return 0;
}
