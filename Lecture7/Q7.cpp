// L7/Q7.cpp
// A question on deep inheritance and access
// Adapted from geeksquiz.com
class Base 
{
public:
  int a;
};
class Derived1: protected Base 
{
public:
  void set(int i) {a=i;}
};
class Derived2: private Derived1 
{
public:
  void set(int i) {a=i;}
};
class Derived3: public Derived2 
{
public:
  void set(int i) {a=i;}
};
int main()
{
  Derived3 d;
  return 0;
}
