// 6
#include <iostream>
using namespace std;

class Exam{
        static int count;

    public:
        ~Exam();
        void Func();
};

int Exam::count = 5;

Exam::~Exam(){
    Exam::count--;
}

void Exam::Func(){
    Exam::count++;
    cout << Exam::count;
}

int main(){
    Exam obj;
    obj.Func();
    return 0;
}