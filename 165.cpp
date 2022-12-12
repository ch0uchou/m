//(9.7, 8)(5.1, 5.3)
#include <iostream>
using namespace std;
class Complex{
    double R;
    double I;
    public:
        Complex();
        Complex operator()(const double&, const double&);
        Complex operator()(const double&);
        void Func();
};
Complex::Complex(): R(0), I(0){

}
Complex Complex::operator()(const double& R, const double& I){
    this->R += R;
    this->I += I;
    return *this;
}
Complex Complex::operator()(const double& R){
    this->R += R;
    return *this;
}
void Complex::Func(){
    cout << "(" << R << ", " << I << ")";
}

int main(){
    Complex obj_x, obj_y;
    obj_y = obj_x(3.2, 5.3);
    obj_x(6.5, 2.7);
    obj_y(1.9);
    obj_x.Func();
    obj_y.Func();
}