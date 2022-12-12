//Another Answer 
//13571358
#include <iostream>
using namespace std;
class A{
    public:
        A();
        A(const A &);
};
A::A(){
    cout << "1";
}
A::A(const A &obj){
    cout << "2";
}
class B :virtual A{
    public:
        B();
        B(const B &);
};
B::B(){
    cout << "3";
}
B::B(const B & obj){
    cout << "4";
}
class C : virtual A{
    public:
        C();
        C(const C &);
};
C::C(){
    cout << "5";
}
C::C(const C & obj){
    cout << "6";
}
class D : B, C{
    public:
        D();
        D(const D &);
};
D::D(){
    cout << "7";
}
D::D(const D &){
    cout << "8";
}
int main(){
    D d1;
    D d(d1);
    return 0;
}
