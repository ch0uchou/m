// Compile Error
#include <iostream>
using namespace std;

class Exam
{
public:
    Exam();
    ~Exam();
    void Func();
};

Exam::Exam()
{
}

Exam::~Exam()
{
}

static void Exam::Func()
{
    cout << "DUT";
}

int main()
{
    Exam::Func();
    return 0;
}