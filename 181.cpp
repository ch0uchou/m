// B BDB B42DB42 ~DB ~B ~DB ~B ~B
#include <iostream>
using namespace std;

class Base
{
public:
    Base();
    Base(int);
    ~Base();
};

Base::Base()
{
    cout << "B";
}

Base::Base(int var_x)
{
    cout << "B" << var_x;
}

Base::~Base()
{
    cout << "~B";
}

class DerivedA : public Base
{
};

class DerivedB : public Base
{
public:
    DerivedB();
    DerivedB(int);
    ~DerivedB();
};

DerivedB::DerivedB()
{
    cout << "DB";
}

DerivedB::DerivedB(int var_x) : Base(var_x)
{
    cout << "DB" << var_x;
}

DerivedB::~DerivedB()
{
    cout << "~DB";
}

int main()
{
    DerivedA obj_x;
    DerivedB obj_y;
    DerivedB obj_z(42);
    return 0;
}