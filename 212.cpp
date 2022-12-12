//Compile Error
#include <iostream>
using namespace std;
class Base{
    public:
        virtual void Func() const = 0;
};
class DerivedA : public Base{
    public:
        void Func() const;
};
void DerivedA::Func() const{
    cout << "1";
}
class DerivedB : public Base{
    public:
        void Func() const;
};
void DerivedB::Func() const{
    cout << "2";
}
class Derived : public DerivedA, public DerivedB{
    public:
        void Func() const;
};
void Derived::Func() const{
    DerivedB:Func();
}
int main(){
    int var_i;
    Derived obj;
    DerivedA obj_a;
    DerivedB obj_b;
    Base* arr[3];
    arr[0] = &obj;
    arr[1] = &obj_a;
    arr[2] = &obj_b;
    arr[var_i]->Func();
    return 0;
}
