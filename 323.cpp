// CE: Derived is abstract
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show() = 0;
};

class Derived : public Base
{
};

int main()
{
    Derived q;
}