// Terminate called after throwing an instance of 'char const*'
#include <iostream>
using namespace std;

void Func(int var_x, int var_y)
{
    if (var_y == 0)
        throw "Error!";
    else
        cout << var_x << var_y;
}

int main()
{
    try
    {
        Func(5, 0);
    }
    catch (char *e)
    {
        cout << e;
    }
    return 0;
}
