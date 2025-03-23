// L9/next_id.cpp
// Use of static variable in class
// Niels Walet, Last modified 24/04/2022
#include <iostream>
class count_use
{
private:
  static int users;
public:
  static int increment_users() {users++; return users;}   
  /* .... */
  count_use() {users++;}
};
int count_use::users{0};
int main()
{
  count_use a;
  std::cout <<a.increment_users() <<" "
	    <<a.increment_users() <<" "
	    <<a.increment_users() <<" "
	    <<std::endl;
  return 0;
}
