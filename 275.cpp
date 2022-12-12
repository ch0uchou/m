// Empty output
#include <iostream>
using namespace std;

class Base
{
    int prop;

public:
    Base();
    void Func();
};

Base::Base() : prop(0) {}

void Base::Func()
{
    this->prop++;
    cout << this->prop;
}

class Derived : private Base
{
public:
    void Func();
};

void Derived::Func()
{
    this->Func();
}

int main()
{
    Derived obj;
    obj.Func();
    return 0;
}