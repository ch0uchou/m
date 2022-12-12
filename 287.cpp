#include <iostream>
using namespace std;
class base{
    int x1;
    public:
        base(int x):x1(x){
            cout<<"a";
        }
};
class child:public base{
    int y1;
    public:
            child(int x,int y):base(x),y1(y){
                cout<<"b";
            }
};
int main(){
    child c1;
    child c2(1,2);
    return 0;
}