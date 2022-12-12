//4
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        Exam(int);
        ~Exam();
        int operator()(int = 0) const;
        operator int() const;
};
Exam::Exam(int prop): prop(prop){

}
Exam::~Exam(){

}
int Exam::operator()(int prop)const{
    return this->prop + prop;
}
Exam::operator int() const{
    return this->prop;
}
int Func(char var_x){
    return var_x;
}
int main(){
    Exam Func(2);
    cout << Func(2);
    return 0;
}