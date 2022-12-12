//0102030
#include <iostream>
using namespace std;

const int Max = 4;

class Exam{
        int arr[Max];

    public:
        int &operator[](const int &);
};

int &Exam::operator[](const int &index){
    if (index == Max - 1){
        int temp;
        for (int i = 0; i < Max - 1; i++){
            if (*(this->arr + index) > *(this->arr + index)){
                temp = *(this->arr + index);
                *(this->arr + index) = *(this->arr + index);
                *(this->arr + index) = temp;
            }
        }
    }
    return *(this->arr + index);
}

int main(){
    Exam obj;
    for (int i = 0; i < Max; i++)
        obj[i] = i * 10;
    for (int i = 0; i < Max; i++){
        int temp = obj[i];
        cout << temp;
    }
    return 0;
}