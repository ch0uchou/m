#include <iostream>
using namespace std;
class base{
    public:
        void fun();
        void fun(int);
};
void base::fun(){
    cout<<"1";
}
void base::fun(int i){
    cout<<"2";
}
class derived:public base{
    public: 
        void fun();
};
void derived::fun(){
    cout<<"3";
}
int main(){
    derived d;
    d.fun(5);
    return 0;
}