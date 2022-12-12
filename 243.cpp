// 11
#include <iostream>
using namespace std;

int main()
{
    int var_x = 1, var_y = 1;
    const int *ptr = &var_x;
    cout << *ptr;
    ptr = &var_y;
    cout << *ptr;
    return 0;
}