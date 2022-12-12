// Compile error
#include <iostream>
using namespace std;

class Exam{
        static int var;

    public:
        static void setVar(int);
        static void showVar();
};

int Exam::var = 0;

void Exam::setVar(int var) : var(var){
}

void Exam::showVar(){
    cout << Exam::var;
}

int main(){
    Exam::setVar(1);
    Exam::showVar();
    return 0;
}