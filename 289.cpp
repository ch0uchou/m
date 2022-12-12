#include <iostream>
using namespace std;
class base{
    public:
        virtual base();
};
base::base(){
    cout<<"base";
}
class derived: public base{
    public:
        base();
};
derived::base(){
    cout<<"derived";
}
int main(){
    base obj;
    return 0;
}