//2
#include <iostream>
using namespace std;
class Base{
    public:
        int prop_a;
        Base();
};
Base::Base():prop_a(1){

}
class Derived : public Base{
    public:
        int prop_b;
        Derived();
};
Derived::Derived(): prop_b(2){

}
void Func(){
    Derived obj;
    throw obj;
}
int main(){
    try{
        Func();
    }
    catch(Derived e){
        cout << e.prop_b;
    }
    catch(Base e){
        cout << e.prop_a;
    }
    return 0;
}