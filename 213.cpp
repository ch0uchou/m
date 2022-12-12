//14
#include <iostream>
using namespace std;
class Base{
    Base(){

    }
    Base(int x){

    }
    Base(int x, int y){

    }
};
class Child : public Base{
    int _x;
};
int main(){
    cout << sizeof(Base) << sizeof(Child);
    return 0;
}