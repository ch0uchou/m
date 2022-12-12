// 3
#include <iostream>
using namespace std;

int main()
{
    int var_x = 1, var_y = 2, var_z = 3;
    int var_t = (var_x, var_y, var_z);
    cout << var_t;
    return 0;
}