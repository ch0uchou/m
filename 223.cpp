//Another Answer
//BaseDerivedDerivedA
#include <iostream>
using namespace std;
class Base{
    public:
        Base();
        ~Base();
};
Base::Base(){
    cout << "Base";
}
Base::~Base(){

}
class Derived : public Base{
    public:
        Derived();
        ~Derived();
};
Derived::Derived(){
    cout << "Derived";
}
Derived::~Derived(){

}
class DerivedA : public Derived{
    public:
        DerivedA();
        ~DerivedA();
};
DerivedA::DerivedA(){
    cout << "DerivedA";
}
DerivedA::~DerivedA(){

}
class DerivedB : public Derived{
    public:
        DerivedB();
        ~DerivedB();
};
DerivedB::DerivedB(){
    cout << "DerivedB";
}
DerivedB::~DerivedB(){

}
int main(){
    DerivedA obj;
    return 0;
}