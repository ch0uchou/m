#include <iostream>
using namespace std;
template<typename T>
inline T Func(T var_x)
{
T result = var_x * var_x;
return result;
};

int main()
{
int var_x, var_y;

float var_z, var_t; double var_m, var_n;

var_x = 2;

var_z = 2.2;

var_m = 2.2;

var_y = Func(var_x);

var_n= Func(var_m);
 cout << var_x << var_y << var_m << var_n;

return 0;
}