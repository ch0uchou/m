// 55106156
#include <iostream>
using namespace std;

class Exam{
        int prop_x, prop_y, prop_z;
    public:
        Exam(int = 0, int = 0, int = 0);
        Exam operator()(Exam);
        Exam operator()(int, int, int);
        friend ostream &operator<<(ostream &, const Exam &);
};

Exam::Exam(int prop_x, int prop_y, int prop_z)
    : prop_x(prop_x), prop_y(prop_y), prop_z(prop_z){
}

Exam Exam::operator()(Exam obj){
    return Exam((this->prop_x + obj.prop_x) / 2,
                (this->prop_y + obj.prop_y) / 2,
                (this->prop_z + obj.prop_z) / 2);
}

Exam Exam::operator()(int prop_x, int prop_y, int prop_z){
    return Exam(this->prop_x + prop_x, this->prop_y + prop_y, this->prop_z + prop_z);
}

ostream &operator<<(ostream &o, const Exam &obj){
    o << obj.prop_x << obj.prop_y << obj.prop_z;
    return o;
}

int main(){
    Exam obj_x(1, 2, 3), obj_y(10, 10, 10), obj_z;
    obj_z = obj_x(obj_y(100, 200, 300));
    cout << obj_z;
    return 0;
}