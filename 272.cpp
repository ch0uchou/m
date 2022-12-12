// 1
#include <iostream>
using namespace std;

class Exam
{
    int &ref;

public:
    Exam(int);
    ~Exam();
    int getRef();
};

Exam::Exam(int ref) : ref(ref)
{
}

Exam::~Exam()
{
}

int Exam::getRef()
{
    return this->ref;
}

int main()
{
    Exam obj(1);
    cout << obj.getRef();
    return 0;
}