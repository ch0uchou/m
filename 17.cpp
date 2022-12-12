//10
#include <iostream>
#include <string>
using namespace std;
class Exam{
    int prop;
    public:
        Exam(int);
        ~Exam();
        friend void Func();
};
Exam::Exam(int prop): prop(prop){

}
Exam::~Exam(){

}
void Func(){
    Exam obj(10);
    cout << obj.prop;
}
int main(){
    Func();
    return 0;
}