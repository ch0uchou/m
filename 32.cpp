//Runtime Error
#include <iostream>
using namespace std;
class Exam{
    int var;
    public:
        Exam();
        ~Exam();
        void Func1();
        void Func2();
};
Exam::Exam(): var(0){

}
Exam::~Exam(){

}
void Exam::Func1(){
    delete this;
}
void Exam::Func2(){
    cout << this->var;
}
int main(){
    Exam obj;
    obj.Func1();
    obj.Func2();
    return 0;
}