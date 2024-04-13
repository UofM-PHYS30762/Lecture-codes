// L10/smartpointer.cpp
// Caterina Doglioni. Last edited 07/04/2023
#include<memory>
#include<iostream>

class cat {

     private :
        std::string name{"Bob"};
     public :
        cat(std::string cat_name){name=cat_name;}
        ~cat() {std::cout << "*Cat walks away.*" << std::endl;}
        void touch() { std::cout << "Meow" << std::endl;}
        void upset() { std::cout << "Hiss!!!!!!!!!!!!!!" << std::endl;}
        void make_happy() { std::cout <<  "Purr" << std::endl;}

};

void pick_up_a_cat()
{
    std::cout << "Pspspsps come here kitty, I'm going to pick you up!" << std::endl;
 
    //this also works with 'auto' instead of std::unique_ptr<cat>
    std::unique_ptr<cat> picked_up_cat_1 = std::make_unique<cat>("Bob");
    std::unique_ptr<cat> picked_up_cat_2 = picked_up_cat_1; 
    //this cat is really not happy to be picked up
    picked_up_cat_1->upset();
    //quick, drop the cat before you get scratched! stop what you're doing and get out of this function

} // `picked_up_cat` goes out of scope here (it is automatically destroyed) when cat gets released


void multiple_people_pet_a_cat()
{
    std::cout << "Ok let's try again, I'm your friend kitty and I'm going to pet you" << std::endl;
 
    //this also works with 'auto' instead of std::unique_ptr<cat>
    std::shared_ptr<cat> cat_pet_by_person_1 = std::make_shared<cat>("Bob");
    //this cat likes to be pet by person #1
    cat_pet_by_person_1->make_happy();

    //now person #2 wants to pet the cat
    std::cout << "I'm also your friend kitty, I'm going to pet you." << std::endl;
    std::shared_ptr<cat> cat_pet_by_person_2 = cat_pet_by_person_1; // we can assign to a new shared pointer
    cat_pet_by_person_2->make_happy();

} // `cat_pet_by_person_1` and _2 both go out of scope here, so underlying pointer is destroyed
int main() 
{

    pick_up_a_cat();
    multiple_people_pet_a_cat();

    std::cout << "*Cat looks at you from a distance and licks its paw absentmindedly.*" << std::endl;

}