#include <iostream>
#include <string>

class SuperClass{
    private:
        int id;
    public:
        int member;
        std::string name;
        SuperClass(std::string _str);
        void greeting();
};

class DerivedClass : public SuperClass{
    public:
        DerivedClass(std::string _str) : SuperClass(_str){};
        void greeting();
};


