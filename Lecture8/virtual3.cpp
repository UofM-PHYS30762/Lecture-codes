// L8/virtual3.cpp
// What does this code do?
// Niels Walet, last updated 04/12/2019
class Base
{
public:
    virtual void show() = 0;
};
class Derived : public Base { };
int main(void)
{
    Derived q;
    return 0;
}
