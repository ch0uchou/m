// CE do In C++, a static member function of a class cannot be virtual.
// Nếu sửa lại thì sẽ in ra derived
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

int main()
{
    Base *ptr = new Base();
    Derived obj_b;
    ptr = &obj_b;
    ptr->Func();
}
