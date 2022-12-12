//Compile Error
#include <iostream>
using namespace std;
class Exam{
    double prop_length;
    double prop_breadth;
    double prop_height;
    public:
        ~Exam();
        double getVolume();
        void setLength(double);
        void setBreadth(double);
        void setHeight(double);
        Exam operator+(const Exam&);
};
Exam::~Exam(){

}
double Exam::getVolume(){
    return this->prop_length * this->prop_breadth * this->prop_height;
}
void Exam::setLength(double prop_length){
    this->prop_length = prop_length;
}
void Exam::setBreadth(double prop_breadth){
    this->prop_breadth = prop_breadth;
}
void Exam::setHeight(double prop_height){
    this->prop_height = prop_height;
}
Exam Exam::operator+(const Exam& obj){
    return Exam(this->prop_length + obj.prop_length, this->prop_breadth + obj.prop_breadth, this->prop_height + obj.prop_height);
}
int main(){
    Exam obj_x;
    Exam obj_y;
    Exam obj_z;
    double volume = 0.0;
    obj_x.setLength(6.0);
    obj_x.setBreadth(7.0);
    obj_x.setHeight(5.0);
    obj_y.setLength(6.0);
    obj_y.setBreadth(7.0);
    obj_y.setHeight(5.0);
    volume = obj_x.getVolume();
    cout << volume;
    volume = obj_y.getVolume();
    cout << volume;
    obj_z = obj_x + obj_y;
    volume = obj_z.getVolume();
    cout << volume;
    return 0;

}