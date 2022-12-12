// 252015105
#include <iostream>
using namespace std;

class Exam{
        int *ptr;
        int size;

    public:
        Exam(int);
        ~Exam();
        int &operator[](const int &);
};

int &Exam::operator[](const int &index){
    return *(this->ptr + index);
}

Exam::Exam(int size){
    this->ptr = new int[size];
    size = size;
}

Exam::~Exam(){
    delete[] this->ptr;
}

int main(){
    Exam obj(5);
    obj[0] = 25;
    obj[1] = 20;
    obj[2] = 15;
    obj[3] = 10;
    obj[4] = 5;
    for (int i = 0; i < 5; ++i)
        cout << obj[i];
    return 0;
}