// Compile error
#include <iostream>
using namespace std;

int &Func1(int var_x = 1)
{
    static int var_y = var_x;
    return var_y;
}

int &Func2(int var_x = 1)
{
    static int var_y = var_x;
    return var_y + 1;
}

int main()
{
    int var_x = 1;
    cout << Func1(Func2(var_x)) << Func2(Func1(var_x));
    return 0;
}