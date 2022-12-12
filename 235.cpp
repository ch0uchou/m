// Compile error
#include <iostream>
using namespace std;

class Exam
{
    int var;

public:
    Exam(int = 0);
    int getVar();
    ~Exam();
};

Exam::Exam(int x = 0) : var(var)
{
}

int Exam::getVar()
{
    return this->var;
}

Exam::~Exam()
{
}

int main()
{
    const Exam obj;
    cout << obj.getVar();
    return 0;
}