// Compile error

#include <iostream>
using namespace std;

class Exam{
    const int var;

public:
    Exam(int);
    ~Exam();
    int getVar();
};

Exam::Exam(int var)
{
    this->var = var;
}

Exam::~Exam(){
}

int Exam::getVar(){
    return this->var;
}

int main(){
    Exam obj(1);
    cout << obj.getVar();
    return 0;
}