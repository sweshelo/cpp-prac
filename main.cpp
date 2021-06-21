#include <iostream>
#include <string>

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
};

void SuperClass::greeting(){
    cout << "Hello. I'm " << this->name << endl;
};


int main(){

    /*

    string str;
    cin >> str;
    cout << "Hello, " << str << endl;

    if (str == "sweshelo")
        cout << "You is me." << endl;

    int n;
    cin >> n;

    switch(n){
        case 0:
            cout << "Fool" << endl;
            break;
        case 1:
            cout << "Magician" << endl;
            break;
        case 2:
            cout << "Highpriestess" << endl;
            break;
        case 3:
            cout << "Empress" << endl;
            break;
        case 4:
            cout << "Emprerror" << endl;
            break;
        case 5:
            cout << "Hierophant" << endl;
            break;
        default:
            cout << "-" << endl;
    }
    */

    SuperClass c("sw");
    c.greeting();

    return 0;
}
