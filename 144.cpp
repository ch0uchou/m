// ITFDUT
#include <iostream>
using namespace std;

class Exam{
    public:
        int prop;
        Exam();
        ~Exam();
} obj;

Exam::Exam()
{
    cout << "ITF";
}

Exam::~Exam() {}

int main()
{
    cout << "DUT";
    return 0;
}