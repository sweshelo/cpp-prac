#include "class.hpp"

SuperClass::SuperClass(std::string _str){
    this->name = _str;
    std::cout << "Born " << this->name << std::endl;
};

void SuperClass::greeting(){
    std::cout << "Hello. I'm " << this->name << std::endl;
};

void DerivedClass::greeting(){
    std::cout << "Guten tag. Ich heibe " << this->name << std::endl;
}

