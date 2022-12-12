// 1
#include <iostream>
using namespace std;

class Base{
        int x;

    public:
        Base(int = 1);
        int operator,(int);
};

Base::Base(int x) : x(x) {

}

int Base::operator,(int x){
    return this->x;
}

int main(){
    Base obj;
    int x = 2;
    cout << (obj, x);
    return 0;
}