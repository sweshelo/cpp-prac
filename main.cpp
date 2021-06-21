#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SuperClass{
    private:
        int id;
    public:
        int member;
        string name;
        SuperClass(string _str);
        void greeting();
};

SuperClass::SuperClass(string _str){
    this->name = _str;
    cout << "Born " << this->name << endl;
};

void SuperClass::greeting(){
    cout << "Hello. I'm " << this->name << endl;
};

class DerivedClass : public SuperClass{
    public:
        DerivedClass(string _str) : SuperClass(_str){};
        void greeting_german();
};

void DerivedClass::greeting_german(){
    cout << "Guten tag. Ich heibe " << this->name << endl;
}


int main(){

    SuperClass c("sw");
    c.greeting();

    DerivedClass t("dm");
    t.greeting();
    t.greeting_german();

    vector<SuperClass> objs;
    objs.push_back(SuperClass("a"));
    objs.push_back(SuperClass("b"));
    objs.push_back(SuperClass("c"));
    objs.push_back(SuperClass("d"));
    objs[3].greeting();

    return 0;
}
