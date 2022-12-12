// C1C2C3
#include <iostream>
using namespace std;

class Exam
{
public:
    Exam();
    Exam(int);
    Exam(int, int);
    ~Exam();
};

Exam::Exam()
{
    cout << "C1";
}

Exam::Exam(int var)
{
    cout << "C2";
}

Exam::Exam(int var1, int var2)
{
    cout << "C3";
}

Exam::~Exam()
{
}

int main()
{
    Exam();
    Exam(1);
    Exam(1, 2);
    return 0;
}