// 11
#include <iostream>
using namespace std;

int &Func()
{
    static int var_x = 1;
    return var_x;
}

int main()
{
    cout << Func();
    cout << Func()++;
    return 0;
}