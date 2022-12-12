// Compile error
// Error line 47
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void Func();
};

void Base::Func()
{
    cout << "B";
}

class Derived : public Base
{
    int prop;

public:
    void Func();
    Derived();
    int getProp() const;
};

void Derived::Func()
{
    cout << "D";
}

Derived::Derived()
{
    this->prop = 10;
}

int Derived::getProp() const
{
    return this->prop;
}

int main()
{
    Derived obj_d;
    Base *ptr = &obj_d;
    ptr->Func();
    cout << ptr->getProp();
    return 0;
}