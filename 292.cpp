#include <iostream>
using namespace std;
class base{
    public:
        base();
        virtual ~base();
};
base::base(){
    cout<<"cb";
}
base::~base(){
    cout<<"db";
}
class derived:public base{
    public:
        derived();
        ~derived();
};
derived::derived(){
    cout<<"cd";
}
derived::~derived(){
    cout<<"dd";
}
int main(){
    derived* d=new derived();
    base* b=d;
    delete b;
    return 0;
}