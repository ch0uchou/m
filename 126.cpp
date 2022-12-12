//50
#include <iostream>
using namespace std;

const int SIZE = 10;

class Exam{
        int arr[SIZE];
    public:
        Exam();
        ~Exam();
        int &operator[](const int &);
};

Exam::Exam(){
    for (int i = 0; i < SIZE; i++){
        this->arr[i] = i;
    }
}

Exam::~Exam(){

}

int &Exam::operator[](const int &index){
    static int temp = 0;
    if (index > SIZE){
        return temp;
    }
    return this->arr[index];
}

int main(){
    Exam obj;
    cout << obj[5] << obj[12];
    return 0;
}