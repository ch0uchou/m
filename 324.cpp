// CBCDDB
#include <iostream>
using namespace std;

class Base
{
public:
    Base();
    ~Base();
};
Base::Base()
{
    cout << "CB";
}
Base::~Base()
{
    cout << "DB";
}
class Derived : public Base
{
public:
    Derived();
    ~Derived();
};
Derived::Derived()
{
    cout << "CD";
}
Derived::~Derived()
{
    cout << "DD";
}
int main()
{
    Derived *ptr_d = new Derived();
    Base *ptr_b = ptr_d;
    delete ptr_b;
    return 0;
}
