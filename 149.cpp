// Empty output
#include <iostream>
using namespace std;

class Exam{
    ~Exam();
};

Exam::~Exam(){
    cout << 'D';
}

int main(){
    Exam *ptr_x = new Exam();
    Exam *ptr_y = new Exam();
    return 0;
}