//0
#include <iostream>
using namespace std;
class ExamA{
    int var;
    public:
        ExamA(int);
        ~ExamA();
        int getVar();
};
ExamA::ExamA(int var): var(var){

}
ExamA::~ExamA(){

}
int ExamA::getVar(){
    return this->var;
}
class ExamB{
    static ExamA var;
    public:
        ~ExamB();
        static int getVar();
};
ExamB::~ExamB(){

}
int ExamB::getVar(){
    return var.getVar();
}
ExamA ExamB::var(0);
int main(){
    ExamB obj;
    cout << obj.getVar();
    return 0;
}