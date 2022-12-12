//4+i6
#include <iostream>
using namespace std;
class Complex{
    int R;
    int I;
    public:
        Complex();
        Complex(int, int);
        ~Complex();
        Complex operator+(const Complex&);
        friend ostream& operator << (ostream&, const Complex&);
};
Complex::Complex(){

}
Complex::Complex(int R, int I): R(R), I(I){

}
Complex::~Complex(){

}
Complex Complex::operator+(const Complex& obj){
    return Complex(this->R + obj.R, this->I + obj.I);
}
ostream& operator << (ostream& o, const Complex& obj){
    o << obj.R << "+i" << obj.I;
    return o;
}
int main(){
    Complex obj_x(1, 2), obj_y(3, 4);
    Complex obj_z = obj_x + obj_y;
    cout << obj_z;
    return 0;
}