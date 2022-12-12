// Compile error
#include <iostream>
using namespace std;

class ExamA{
        int prop;

    public:
        ExamA(int);
        ~ExamA();
};

ExamA::ExamA(int prop) : prop(prop){
}

ExamA::~ExamA(){
}

class ExamB{
        ExamA prop;

    public:
        ExamB(int);
        friend void Func();
};

ExamB::ExamB(int prop){
    this->prop = ExamA(prop);
}

void Func(){
    ExamB obj(10);
    cout << obj.prop.prop;
}

int main(){
    Func();
    return 0;
}