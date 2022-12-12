// Null pointer on second type-cast
#include <iostream>
#include <exception>
using namespace std;

class Base
{
    virtual void Func();
};

void Base::Func() {}

class Derived : public Base
{
    int prop;
};

int main()
{
    try
    {
        Base *ptr_x = new Derived;
        Base *ptr_y = new Base;
        Derived *ptr_d;
        ptr_d = dynamic_cast<Derived *>(ptr_x);
        if (ptr_d == 0)
            cout << "Null pointer on first type-cast";
        ptr_d = dynamic_cast<Derived *>(ptr_y);
        if (ptr_d == 0)
            cout << "Null pointer on second type-cast";
    }
    catch (exception &e)
    {
        cout << "Exception";
    }
    return 0;
}