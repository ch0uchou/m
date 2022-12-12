//CBaseA.CCBaseA.CBaseB.
#include <iostream>
using namespace std;
class BaseA{
    public:
        BaseA();
        BaseA(const BaseA&);
        BaseA& operator = (const BaseA&);
};
BaseA::BaseA(){
    cout << "CBaseA.";
}
BaseA::BaseA(const BaseA& obj){
    cout << "CCBaseA.";
}
BaseA& BaseA::operator=(const BaseA& obj){
    if(this == &obj)
        return *this;
    cout << "A0BaseA.";
    return *this;
}
class BaseB{
    BaseA obj;
    public:
        BaseB(BaseA&);
};
BaseB::BaseB(BaseA &obj): obj(obj){
    cout << "CBaseB.";
}
int main(){
    BaseA obj1;
    BaseB obj2(obj1);
    return 0;
}