//Compile Error
#include <iostream>
using namespace std;
class Exam {
    static int var;
    public:
        Exam(int);
        ~Exam();
        int getVar();
};
Exam::Exam(int var){
    Exam::var = var;
}
Exam::~Exam(){

}
int Exam::getVar(){
    return Exam::var;
}
int main(){
    Exam obj(1);
    cout << obj.getVar();
    return 0;
}
