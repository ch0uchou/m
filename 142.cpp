// CNTTCNTT
#include <iostream>
using namespace std;

class Base{
        int x;

    public:
        Base(int);
};

Base::Base(int x) : x(x){
    cout << "CNTT";
}

int main(){
    Base obj(2);
    obj = 3;
    system("pause");
    return 0;
}