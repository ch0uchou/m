// Compile Error: Derived is abstract
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
    return 0;
}
// A. Compile Error: Derived is abstract
// B. Compile Error: there cannot be an empty derived class
// C. Another Answer
// D. No Compile Error
// E. Runtime Error