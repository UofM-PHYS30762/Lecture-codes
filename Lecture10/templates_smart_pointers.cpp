// L10/smartpointer.cpp
// Caterina Doglioni. Last edited 07/04/2023
#include<memory>
#include<iostream>

class cat {

     private :
        std::string name{"Bob"};
     public :
        cat(std::string cat_name){
            std::cout << "*Cat comes in.*" << std::endl;
            name=cat_name;
        }
        ~cat() {std::cout << "*Cat walks away.*" << std::endl;}
        void touch() { std::cout << "Meow" << std::endl;}
        void upset() { std::cout << "Hiss!!!!!!!!!!!!!!" << std::endl;}
        void make_happy() { std::cout <<  "Purr" << std::endl;}

};

class dog {

     private :
        std::string name{"Ollie"};
     public :
        dog(std::string dog_name){
            std::cout << "*Dog comes in.*" << std::endl;
            name=dog_name;
        }
        ~dog() {std::cout << "*Dog walks away.*" << std::endl;}
        void touch() { std::cout << "Woof" << std::endl;}
        void upset() { std::cout << "Bark!!!!!!!!!!!!!!" << std::endl;}
        void make_happy() { std::cout <<  "Yip" << std::endl;}

};

//this templated class works for a cat or for a dog
template <class type_c>
class PetBed {
   private:
    // Variable of type T
    std::shared_ptr<type_c> occupant;

   public:
    PetBed(std::shared_ptr<type_c> pet) : occupant(pet) {
        std::cout << "Pet enters the bed" << std::endl;
    }   // constructor
    //void petPet();
    void petPet() {
        occupant->make_happy();
    }
};

//now let's declare this function outside the class rather than insid
//template <class type_c>
//void PetBed<type_c>::petPet() 
//{
//    occupant->make_happy();
//}


int main () 
{

    //cat* BobTheCat = new cat("Bob");
    std::shared_ptr<cat> BobTheCat = std::make_shared<cat>("Bob");

    PetBed<cat> bobs_pet_bed(BobTheCat);
    bobs_pet_bed.petPet();
    //delete BobTheCat;

}


//advanced exercises if we have time:
// - templates with smart pointers
// - templates with inheritance
// - multiple types and default parameters
// e.g. template <class T, class U, class V = char>
