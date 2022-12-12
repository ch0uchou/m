#include <iostream>
using namespace std;
class a{
    public:
        virtual void fun();
};
void a::fun(){
    cout<<"a";
}
class b:public a{
    public:
        void fun();
};
void b::fun(){
    cout<<"b";
}
class c:public b{
    public: void fun();
};
void c::fun(){
    cout<<"c";
}
int main(){
    b *x=new c;
    x->fun();
    return 0;
}

