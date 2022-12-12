//9,10
#include <iostream>
using namespace std;
class Complex{
    double R, I;
    public:
        Complex(double, double);
        Complex(double);
        friend Complex operator + (Complex, Complex);
        friend ostream& operator << (ostream &, Complex);
};
Complex::Complex(double R, double I): R(R), I(I){

}
Complex::Complex(double R){
    this->R = this->I = R;
}
Complex operator+(Complex obj1, Complex obj2){
    return Complex(obj1.R +obj2.R, obj1.I + obj2.I);
}
ostream & operator << (ostream &o, Complex obj){
    o << obj.R << "," << obj.I;
    return o;
}
int main(){
    Complex obj1(3, 4);
    Complex obj2 = obj1 + 6;
    cout << obj2;
    return 0;
}