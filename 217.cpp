//AAA
#include <iostream>
using namespace std;
class Base{
    public:
        char S, A, M;
        Base(char x, char y){
            S = y-y; A = x+x; M=x*x;
        }
        Base(char, char y = 'A', char z = 'B'){
            S = y; A = y+1-1; M = z-1;
        }
        void Display(void){
            cout << S << A << M;
        }
};
class Derived : public Base{
    char x, y, z;
    public:
        Derived(char xx = 65, char yy = 66, char zz =65): Base(x){
            x =xx; y = yy; z = zz;
        }
        void Display(int n){
            if(n)
                Base::Display();
            else
                cout << x << y <<z;
        }
};
int main(){
    Derived objDev;
    objDev.Display(0-1);
    return 0;
}