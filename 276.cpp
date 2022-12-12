// 610
#include <iostream>
using namespace std;

template <class T>
T Func(T &var_x, T &var_y)
{
    return (var_x > var_y ? var_x : var_y);
}

int main()
{
    int var_x = 5, var_y = 6, var_z;
    long var_i = 10, var_j = 5, var_k;
    var_z = Func(var_x, var_y);
    var_k = Func(var_i, var_j);
    cout << var_z << var_k;
    return 0;
}