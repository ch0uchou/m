#include <iostream>
using namespace std;
class base{
    int prop;
    public:
        virtual void func()=0;
};
class derived: public base{
    public:
        void func();
};
void derived::func(){
    cout<<"ITF";
}
int main(){
    derived obj;
    obj.func();
    return 0;
}