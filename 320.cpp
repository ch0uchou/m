#include <iostream>
using namespace std;
class X
{
public:
    int a;
    void f(int);
};
void X::f(int b)
{
    cout << b;
}
int main()
{
    int X ::*ptiptr = &X::a;
    void (X::*ptfptr)(int) = &X::f;
    X xobject;
    xobject.*ptiptr = 10;
    cout << xobject.*ptiptr;
    (xobject.*ptfptr)(20);
    system("pause");
    return 0;
}