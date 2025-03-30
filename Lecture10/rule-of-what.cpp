#include<memory>
#include<iostream>

class ClassB {
    private:
        std::unique_ptr<int> m_num;
    
    public:
    
        ClassB(int num) : m_num(std::make_unique<int>(num)) {};
        ClassB(const ClassB&)
            {std::cout << "whoops!" << std::endl;}
        int getNum() const {return *m_num;}      
        int* getNumAddress() const {return m_num.get();}      
    
};

int main() 
{

    ClassB myClassB(10);
    ClassB myClassB_copied(myClassB);

    std::cout << myClassB.getNum() << std::endl;
    std::cout << myClassB.getNumAddress() << std::endl;

    //std::cout << myClassB_copied.getNum() << std::endl;
    //std::cout << myClassB_copied.getNumAddress() << std::endl;

}