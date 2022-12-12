// 1234
#include <iostream>
using namespace std;

class Exam{
        static int count;

    public:
        Exam();
        ~Exam();
        Exam &Func();
};

int Exam::count = 0;

Exam::Exam(){
}

Exam::~Exam(){
}

Exam &Exam::Func(){
    Exam::count++;
    cout << Exam::count;
    return *this;
}

int main(){
    Exam *ptr = new Exam;
    ptr->Func().Func().Func().Func();
    return 0;
}