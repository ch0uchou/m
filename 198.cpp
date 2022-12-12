// -3
#include <iostream>
using namespace std;

int main()
{
    int var_x = 10, var_y = 20, var_z = 30;
    float var_t;
    try
    {
        if ((var_x - var_y) != 0)
        {
            var_t = var_z / (var_x - var_y);
            cout << var_t;
        }
        else
        {
            throw(var_x - var_y);
        }
    }
    catch (int &e)
    {
        cout << e;
    }
    return 0;
}