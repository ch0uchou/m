// DB
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show();
};

void Base::show()
{
    cout << "B";
}

class Derived : public Base
{
public:
    void show();
};

void Derived::show()
{
    cout << "D";
}

int main()
{
    Base *bp, b;
    Derived d;
    bp = &d;
    bp->show();
    bp = &b;
    bp->show();
    return 0;
}
