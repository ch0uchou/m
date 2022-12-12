//012123234
#include <iostream>
using namespace std;
class Exam{
    int arr[3][3];
    public:
        Exam();
        void Func();
};
Exam::Exam(){
    for (int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            this->arr[j][i] = i + j;
}

void Exam::Func(){
    for (int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cout << this->arr[j][i];
}
int main(){
    Exam obj;
    obj.Func();
    return 0;
}