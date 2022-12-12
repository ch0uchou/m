// 1
#include <iostream>
using namespace std;

class Exam{
        int prop;

    public:
        Exam();
        Exam(int);
        Exam(const Exam &);
        friend ostream &operator<<(ostream &, const Exam);
};

Exam::Exam(){

}

Exam::Exam(int prop) : prop(prop) {

}

Exam::Exam(const Exam &obj){
    this->prop = obj.prop;
}

ostream &operator<<(ostream &o, const Exam obj){
    o << obj.prop;
    return o;
}

int main(){
    Exam obj1(1);
    Exam obj2 = obj1;
    cout << obj2;
    return 0;
}