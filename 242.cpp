// 7
#include <iostream>
using namespace std;

int Func(int var_x, int var_y)
{
    return (var_x > var_y ? var_x : var_y);
}

int main()
{
    int var_x = 5;
    int var_y = 7;
    cout << Func(var_x, var_y);
    return 0;
}