// CE
#include <iostream>
using namespace std;

double Func(double var_d)
{
    if (var_d < 0.0)
        throw "Error!";
    return sqrt(var_d);
}
int main()
{
    double var_d = 5;
    cout << Func(var_d);
    return 0;
}