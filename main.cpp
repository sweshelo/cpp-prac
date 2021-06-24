#include "class.cpp"
#include <vector>

using namespace std;

void argFunc(){
    cout << "関数ポインタのテストです。こんにちは。"<< endl;
}

int main(){

    void (*fp)() = argFunc;

    SuperClass c("sw");
    c.execute = fp;
    c.execute();

    return 0;
}
