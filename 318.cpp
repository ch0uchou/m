#include <iostream>
using namespace std;
class Base1
{
public:
    Base1();
};
Base1::Base1()
{
    cout << "1";
}
class Base2
{
public:
    Base2();
};
Base2::Base2()
{
    cout << "2";
}
class Derived : public Base1, public Base2
{
public:
    Derived();
};
Derived::Derived()
{

    cout << "3";
}
int main()
{
    Derived d;
    system("pause");

    return 0;
}