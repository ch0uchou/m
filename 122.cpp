//obj_y has large prop
#include <iostream>
using namespace std;

class Exam{
        int prop;
    public:
        Exam();
        Exam(double prop);
        ~Exam();
        bool operator<(const Exam &);
};

Exam::Exam(){
}

Exam::Exam(double prop) : prop(prop){
}

Exam::~Exam(){

}

bool Exam::operator<(const Exam &obj){
    return this->prop < obj.prop ? true : false;
}

int main(){
    Exam obj_x(10);
    Exam obj_y = Exam(14);
    if (obj_x < obj_y)
        cout << "obj_y has large prop";
    else
        cout << "obj_x has large prop";
    return 0;
}