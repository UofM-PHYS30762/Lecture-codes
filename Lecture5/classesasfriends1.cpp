// L5/classesasfriends1.cpp
// How not to use a friend class
// Source: Prof. Niels Walet's code repository
class class_b; // forward declaration
class class_a 
{
public:
  int function1(class_b& b); // must be public since declared as friend 
  int function2(class_b& b);
};
class class_b 
{
private:
  int b_store;
  friend int class_a::function1(class_b&);
};
int class_a::function1(class_b& b) {return b.b_store;}  //legal since friend
//int class_a::function2(class_b& b) {return b.b_store;}  //illegal
int main() {
  return 0;
}
