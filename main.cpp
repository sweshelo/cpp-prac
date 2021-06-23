#include "class.cpp"
#include <vector>

using namespace std;

int main(){

    SuperClass c("sw");
    c.greeting();

    DerivedClass t("dm");
    t.greeting();

    return 0;
}
