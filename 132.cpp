// CD
#include <iostream>
using namespace std;

class Exam{
    public:
        Exam();
        ~Exam();
};

Exam::Exam(){
    cout << 'C';
}

Exam::~Exam(){
    cout << 'D';
}

int main(){
    delete new Exam();
    return 0;
}