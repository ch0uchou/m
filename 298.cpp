#include <iostream>
using namespace std;
class base{
    int x1;
    public:
        base(int x){
            x1=x;
            cout<<"a";
        }
        
};
class child: public base{
    int y1;
    public:
        child(int x,int y):base(x){
            y1=y;
            cout<<"B";
        }
};
int main(){
    child c1(1,2);
    child c2;
    c2=c1;
    return 0;
}