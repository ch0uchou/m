// Compile Error
#include <iostream>
using namespace std;

class Base
{
    int prop;

public:
    Base();
    static void Func();
};

Base::Base() : prop(0)
{
}

void Base::Func()
{
    prop++;
    cout << prop;
}

class Derived : public Base
{
};

int main()
{
    Derived obj;
    obj.Func();
    return 0;
}