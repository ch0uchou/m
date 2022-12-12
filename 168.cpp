//1020
#include <iostream>
using namespace std;
class BaseA{
    int x;
    public:
        BaseA(int = 0);
        friend ostream& operator << (ostream&, const BaseA&);
};
BaseA::BaseA(int x): x(x){

}
ostream& operator << (ostream& o, const BaseA& obj){
    o << obj.x;
    return o;
}
class BaseB{
    int x;
    public:
        BaseB(int);
        operator BaseA()const;
};
BaseB::BaseB(int x): x(x){

}
BaseB::operator BaseA() const{
    return BaseA(this->x);
}
void Func(BaseA obj){
    cout << obj;
}
int main(){
    BaseB obj(10);
    Func(obj);
    Func(20);
    return 0;
}