// 42A
#include <iostream>
using namespace std;

template <typename T>
class Base
{
public:
    T prop;
    Base(T i);
    void Func();
};

template <typename T>
Base<T>::Base(T prop)
{
    this->prop = prop;
}

template <typename T>
void Base<T>::Func()
{
    cout << this->prop;
}

class Derived : public Base<char>
{
public:
    Derived();
    Derived(char);
    void Func1();
};

Derived::Derived() : Base<char>(0)
{
}

Derived::Derived(char prop) : Base<char>(prop)
{
}

void Derived::Func1()
{
    this->Func();
}

int main()
{
    Base<int> obj_b(42);
    Derived obj_d('A');
    obj_b.Func();
    obj_d.Func();
    return 0;
}