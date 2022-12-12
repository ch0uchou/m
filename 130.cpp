// 12
#include <iostream>
using namespace std;

class Exam{
        int var1, var2;

    public:
        Exam(int = 1, int = 2);
        ~Exam();
        void Func();
};

Exam::Exam(int var1, int var2) : var1(var1), var2(var2) {

}

Exam::~Exam() {

}

void Exam::Func(){
    cout << this->var1 << this->var2;
}

int main(){
    Exam obj;
    obj.Func();
    return 0;
}