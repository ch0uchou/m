//Q2
#include <iostream>
using namespace std;
class base{
    public:
        virtual base();
};
base::base(){
    cout<<"1";
}
int main(){
    base obj;
    return 0;
}