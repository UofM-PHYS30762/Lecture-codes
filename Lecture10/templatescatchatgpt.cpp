//Prompt: can you write a C++ example featuring templates, weak pointers and cats? 
//Answer: Sure! Here's an example of a templated C++ class that represents a cat shelter, 
//using weak pointers to allow for non-owning references to cats:



#include <iostream>
#include <string>
#include <vector>
#include <memory>

template <typename Cat>
class CatShelter {
public:
    void add_cat(std::shared_ptr<Cat> cat) {
        cats_.push_back(cat);
    }
    
    void list_cats() const {
        for (const auto& weak_cat : weak_cats_) {
            if (auto cat = weak_cat.lock()) {
                std::cout << cat->name() << " (" << cat->age() << " years old)" << std::endl;
            } else {
                std::cout << "A cat has left the shelter." << std::endl;
            }
        }
    }
    
    void add_weak_cat(std::weak_ptr<Cat> weak_cat) {
        weak_cats_.push_back(weak_cat);
    }
    
private:
    std::vector<std::shared_ptr<Cat>> cats_;
    std::vector<std::weak_ptr<Cat>> weak_cats_;
};

class Cat {
public:
    Cat(std::string name, int age) : name_(name), age_(age) {}
    
    std::string name() const {
        return name_;
    }
    
    int age() const {
        return age_;
    }
    
private:
    std::string name_;
    int age_;
};

int main() {
    auto cat1 = std::make_shared<Cat>("Whiskers", 3);
    auto cat2 = std::make_shared<Cat>("Fluffy", 2);
    auto cat3 = std::make_shared<Cat>("Mittens", 5);
    
    CatShelter<Cat> shelter;
    
    shelter.add_cat(cat1);
    shelter.add_cat(cat2);
    shelter.add_cat(cat3);
    
    shelter.add_weak_cat(cat1);
    shelter.add_weak_cat(cat2);
    shelter.add_weak_cat(cat3);
    shelter.add_weak_cat(std::weak_ptr<Cat>(cat1));
    
    std::cout << "Our cats:" << std::endl;
    shelter.list_cats();
    
    cat2.reset();
    
    std::cout << "Our cats after Fluffy left the shelter:" << std::endl;
    shelter.list_cats();
    
    return 0;
}

/* In this example, we have a templated class CatShelter that takes a type parameter Cat. 
The CatShelter class has three member functions: add_cat, which adds a cat to the shelter as a shared pointer, 
list_cats, which lists all of the cats in the shelter (using weak pointers to allow for non-owning references), 
and add_weak_cat, which adds a weak pointer to a cat to the shelter.

We also have a non-templated Cat class that represents an individual cat. The Cat class has a constructor that 
takes a name and an age, as well as getter functions for the name and age.

In the main function, we create three Cat objects and add them to the CatShelter object using std::make_shared to 
create shared pointers. We also add weak pointers to the cats using the add_weak_cat function. 
We then call the list_cats function to print out the names and ages of all the cats in the shelter, 
including the ones referenced by weak pointers.

We then reset the shared pointer cat2, representing the cat named "Fluffy". 
When we call list_cats again, the reference to the Fluffy cat using a weak pointer will print "A cat has left */