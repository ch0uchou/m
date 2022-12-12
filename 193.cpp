// BaseDerivedA
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void Func();
};

void Base::Func()
{
    cout << "Base";
}

class Derived : public Base
{
public:
    void Func();
};

void Derived::Func()
{
    cout << "Derived";
}

class DerivedA : public Derived
{
public:
    void Func();
};

void DerivedA::Func()
{
    cout << "DerivedA";
}

class DerivedB : public Derived
{
public:
    void Func();
};

void DerivedB::Func()
{
    cout << "DerivedB";
}

int main()
{
    Base *ptr = new Base();
    DerivedA obj_a;
    DerivedB obj_b;
    *ptr = obj_a;
    ptr->Func();
    ptr = &obj_a;
    ptr->Func();
}
