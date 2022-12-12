// Compile error

#include <iostream>
using namespace std;

class Exam{
    public:
        Exam(char);
        ~Exam();
};

Exam::Exam(char var){
    var = 'C';
    cout << var;
}

Exam::~Exam(){
    cout << 'D';
}

int main(){
    Exam *ptr = new Exam[3];
    delete[] ptr;
    return 0;
}