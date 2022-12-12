// Compile error

#include <iostream>
using namespace std;

class Exam{
        static int var;

    public:
        Exam();
        ~Exam();
        static int getVar();
};

int Exam::var = 0;

Exam::Exam(){
    Exam::var++;
}

Exam::~Exam(){
}

int Exam::getVar(){
    return Exam::var;
}

int main()
{
    cout << Exam::getVar();
    Exam *ptr = new Exam;
    cout << (*ptr)->getVar();
    return 0;
}