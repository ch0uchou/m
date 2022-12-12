//Runtime Error
#include <iostream>
using namespace std;
class Exam {
    int *ptr;
    int size;
    public:
        Exam(int);
        ~Exam();
        int& operator [] (const int&);
        friend ostream& operator << (ostream&, const Exam&);
};
int& Exam::operator[](const int& index){
    return *(this->ptr + index);
}
Exam::Exam(int size){
    this->ptr = new int[size];
    this->size = size;
}
Exam::~Exam(){
    delete[] this->ptr;
}
ostream& operator<<(ostream& o, const Exam& obj){
    for (int i = 0; i < obj.size; ++i){
        o << obj.ptr[i];
    }
    return o;
}

int main(){
    Exam obj(5);
    obj[0]= 25;
    obj[1] = 20;
    obj[2] = 15;
    obj[3] = 10;
    obj[4] = 5;
    cout << obj;
    return 0;
}