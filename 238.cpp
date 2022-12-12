// 5500.263
#include <iostream>
using namespace std;

void Func(int var_x)
{
    cout << var_x;
}

void Func(double var_x)
{
    cout << var_x;
}

int main(void)
{
    Func(5);
    Func(500.263);
    return 0;
}