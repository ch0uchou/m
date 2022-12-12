// 12
#include <iostream>
using namespace std;

typedef int *P;

int main()
{
    int var_x = 1, var_y = 2;
    P ptr_x, ptr_y;
    ptr_x = &var_x;
    ptr_y = &var_y;
    cout << *ptr_x << *ptr_y;
    return 0;
}