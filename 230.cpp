//12
#include <iostream>
using namespace std;
class Base{
    double prop_d;
    public:
        Base();
        ~Base();
};
Base::Base(){
    cout << "1";
}
Base::~Base(){

}
class Derived : public Base{
    int prop_i = 15;
    public:
        Derived();
        ~Derived();
};
Derived::Derived(){
    cout << "2";
}
Derived::~Derived(){

}

int main(){
    Derived obj;
    return 0;
}