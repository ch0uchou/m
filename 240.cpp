// 11034
#include <iostream>
using namespace std;

void Func(int var_x, int var_y = 10)
{
    cout << var_x << var_y;
}

int main()
{
    Func(1);
    Func(3, 4);
    return 0;
}