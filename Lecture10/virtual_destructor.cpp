// Example adapted from https://rules.sonarsource.com/cpp/RSPEC-1235/
#include <iostream>
#include <memory>

class Base 
{ // Noncompliant: no destructor was supplied, and the default (compiler-provided) version is not virtual
  // You can uncomment the lines below to see that the base class version is called using the output
    public:
        Base() {}
        virtual void doSomething() {}
        //~Base() {
        //    std::cout << "Destroying Base" << std::endl;
        //}
};
    
class Derived : public Base 
{
    public:
        Derived() {}
        ~Derived() {
            std::cout << "Destroying Derived" << std::endl;
        }
};
    
int main() {
    
    std::unique_ptr<Base> p = std::make_unique<Derived>();
    // when the pointer goes out of scope, only the base class destructor is called
    return(0);
}