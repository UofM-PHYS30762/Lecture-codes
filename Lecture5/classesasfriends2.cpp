// L5/classesasfriends2.cpp
// How to use a friend class
// Source: Prof. Niels Walet's code repository
#include <iostream>
#include <cstdlib>
class class1
{
  friend class friend_class;  // Declare a friend class
public:
  class1() : top_secret{rand()} {}
  void print_member() { std::cout << top_secret << std::endl; }
private:
  int top_secret;
};
class friend_class
{
public:
   void change(class1& object1, int x ){object1.top_secret = x;}
};
int main() 
{
  class1 befriended;
  friend_class friendly;
  befriended.print_member();
  friendly.change(befriended,rand());
  befriended.print_member();
}
