//C1C2C3D3D2D1
#include <iostream>
using namespace std;
class Exam{
    int var;
    static int count;
    public:
        Exam();
        ~Exam();
};
int Exam::count = 0;
Exam::Exam(){
    this->count++;
    this->var = this->count;
    cout << 'C' << this->var;
}
Exam::~Exam(){
    cout << 'D' << this->var;
}
void Func(){
    Exam arr[3];
}
int main(){
    Func();
    return 0;
}