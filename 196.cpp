// 5
#include <iostream>
using namespace std;

class BaseA
{
protected:
    int x;

public:
    BaseA();
    void Show();
};

BaseA::BaseA()
{
    this->x = 5;
}

void BaseA::Show()
{
    cout << this->x;
}

class BaseB
{
protected:
    int x;

public:
    BaseB();
    void Show();
};

BaseB::BaseB()
{
    this->x = 10;
}

void BaseB::Show()
{
    cout << this->x;
}

class Derived : public BaseA, public BaseB
{
};

int main()
{
    Derived obj;
    obj.BaseA::Show();
    return 0;
}