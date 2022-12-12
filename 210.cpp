// 1510
#include <iostream>
using namespace std;

class Base
{
    double prop_x;

public:
    void SetPropX(int);
    void PrintPropX();
};

void Base::SetPropX(int prop_x)
{
    this->prop_x = prop_x;
}

void Base::PrintPropX()
{
    cout << this->prop_x;
}

class Derived : public Base
{
    int prop_x = 15;

public:
    void Print();
};

void Derived::Print()
{
    cout << this->prop_x;
}

int main()
{
    Derived obj;
    obj.SetPropX(10);
    obj.Print();
    obj.PrintPropX();
}