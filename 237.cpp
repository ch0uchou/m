// 1
#include <iostream>
using namespace std;

int main()
{
    int var_x = 5, var_y = 10, var_z;
    int *ptr_x = &var_x, *ptr_y = &var_y;
    var_z = ptr_x - ptr_y;
    cout << var_z;
    return 0;
}