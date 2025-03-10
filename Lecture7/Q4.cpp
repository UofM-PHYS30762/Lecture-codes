// L7/Q4.cpp
// A question on pointers to base and derived class
// Adapted from geeksquiz.com
class Base {};
class Derived: public Base {};
int main()
{
    Base *bp = new Derived;
    Derived *dp = new Base;
}
