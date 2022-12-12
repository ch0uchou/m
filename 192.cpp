// 4
#include <iostream>
using namespace std;

class Base
{
protected:
    int prop_a;

public:
    Base(int);
    ~Base();
    int getProp();
};

Base::Base(int prop) : prop_a(prop) {}

Base::~Base() {}

int Base::getProp()
{
    return this->prop_a;
}

class Derived : public Base
{
    int prop_b;

public:
    Derived(int, int);
    ~Derived();
    void Func();
};

Derived::Derived(int var_x, int var_y) : Base(var_y), prop_b(var_x) {}

Derived::~Derived() {}

void Derived::Func()
{
    cout << this->prop_a;
}

int main()
{
    Derived obj(3, 4);
    obj.Func();
    return 0;
}