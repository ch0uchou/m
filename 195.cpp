// Caught a exception
#include <iostream>
using namespace std;

class Base
{
};

class Derived : public Base
{
};

void Func()
{
    throw Derived();
}

int main()
{
    try
    {
        Func();
    }
    catch (const Base &)
    {
        cerr << "Caught a exception";
    }
    return 0;
}