//73
#include <iostream>
using namespace std;
class Exam{
    int prop_x, prop_y;
    public:
        Exam();
        Exam(int, int);
        ~Exam();
        Exam operator+(const Exam&);
        friend ostream& operator << (ostream&, const Exam&);
};
Exam::Exam(){

}
Exam::Exam(int prop_x, int prop_y): prop_x(prop_x), prop_y(prop_y){

}
Exam::~Exam(){

}
Exam Exam::operator+(const Exam& obj){
    return Exam(this->prop_x + obj.prop_x, this->prop_y + obj.prop_y);
}
ostream& operator << (ostream& o, const Exam& obj){
    o << obj.prop_x << obj.prop_y;
    return o;
}
int main(){
    Exam obj_x(4,1);
    Exam obj_y(3,2);
    Exam obj_z = obj_x +obj_y;
    cout << obj_z;
    return 0;
}
