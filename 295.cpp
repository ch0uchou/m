#include <iostream>
using namespace std;
class base{
    public:
        
        virtual void func() const;
};
void base::func() const{ }
class derived: public base{
    public:
        virtual void func() const;
};
void derived::func() const{ }
int main(){
    base b;
    base& x=b;
    try{
        derived& d=dynamic_cast<derived&>(x);
    }
    catch(bad_cast){
        cout<<"error!";
    }
    return 0;
}