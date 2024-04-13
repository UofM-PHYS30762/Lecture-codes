// L10/Q3a.cpp
// Caterina Doglioni. Last edited 07/04/2023
#include<memory>

int main() 
{

std::unique_ptr<Foo> uptr(new Foo{}); 
f(uptr); // transfer of ownership

}

std::unique_ptr<Foo> p{ new Foo{} }; // allocation
f(std::move(p)); // transfer ownership
assert(p.get() == nullptr);