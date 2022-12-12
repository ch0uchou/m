// Garbage Value
#include <iostream>
using namespace std;

struct ExamA;
struct ExamB{
    void Func(ExamA *);
};

struct ExamA{
        int prop_a;

    public:
        void Initialize();
        friend void Func(ExamA *, int);
        friend void ExamB::Func(ExamA *);
        friend struct ExamC;
        friend void Func();
};

void ExamA::Initialize(){
    prop_a = 0;
}

void Func(ExamA *ptr, int prop_c){
    ptr->prop_a = prop_c;
}

void ExamB::Func(ExamA *ptr){
    ptr->prop_a = 47;
    cout << ptr->prop_a;
}

struct ExamC{
        int prop_c;

    public:
        void Initialize();
        void Func(ExamA *);
};

void ExamC::Initialize(){
    prop_c = 99;
}

void ExamC::Func(ExamA *ptr){
    ptr->prop_a += prop_c;
    cout << prop_c + ptr->prop_a;
}

void Func(){
    ExamA obj;
    obj.prop_a = 100;
    cout << obj.prop_a;
}

int main(){
    ExamA obj_a;
    ExamC obj_c;
    obj_c.Func(&obj_a);
    return 0;
}
