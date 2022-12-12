//10100
#include <iostream>
using namespace std;
class Base{
    int prop;
    public:
        Base();
        Base(int);
        ~Base();
        int getProp();
};
Base::Base(): prop(10){

}
Base::~Base(){

}
Base::Base(int prop): prop(prop){

}
int Base::getProp(){
    return this->prop;
}
class Derived: public Base{
    int prop;
    public:
        Derived(int);
        ~Derived();
        int GetProp();
};
Derived::Derived(int prop): prop(prop){

}
Derived::~Derived(){

}
int Derived::GetProp(){
    return this->prop;
}
int main(){
    Derived obj(100);
    cout << obj.getProp() << obj.GetProp();
}
