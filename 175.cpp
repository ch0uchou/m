//2,3
#include <iostream>
using namespace std;
class Complex{
    double R, I;
    public:
        Complex(double = 1.0, double = 2.0);
        Complex operator + (Complex);
        friend ostream& operator << (ostream &, Complex);
};
Complex::Complex(double R, double I): R(R), I(I){

}
Complex Complex::operator+(Complex obj){
    return Complex(this->R +obj.R, this->I + obj.I);
}
ostream & operator << (ostream &o, Complex obj){
    o << obj.R << "," << obj.I;
    return o;
}
int main(){
    Complex obj1;
    Complex obj2(2.0, 3.0);
    obj2.operator+(obj1);
    cout << obj2;
    return 0;
}