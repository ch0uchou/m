// CNTTCNTT12
#include <iostream>
using namespace std;

class Base{
    public:
        int x;

    public:
        void Show();
};

void Base::Show(){
    cout << "CNTT";
}

void (Base::*x)() = &Base::Show;

int Base::*y = &Base::x;

int main(){
    Base obj;
    Base *ptr = new Base;
    (obj.*x)();
    (ptr->*x)();
    obj.*y = 1;
    ptr->*y = 2;
    cout << obj.*y << ptr->*y;
    system("pause");
    return 0;
}