#include<iostream>
using namespace std;
class Base{
    int prop_b; 
    public:
        void setPropB(int); 
        void printPropB();
};
void Base::setPropB(int prop_b){

    this->prop_b=prop_b;

} 
void Base::printPropB(){

cout << this->prop_b;
}
class Derived: private Base{

int prop_d; 
public:
    void setPropD(int, int); 
    void printPropD();
};

void Derived::setPropD(int prop_b, int prop_d){
    setPropB(prop_b); 
    this->prop_d = prop_d;
}
void Derived::printPropD()
{
    printPropB(); 
    cout << this->prop_d;
}
int main(){

    Derived obj; 
    obj.setPropD(10, 20);
    obj.printPropD(); 
    return 0;
}