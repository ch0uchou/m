// 0
#include <iostream>
using namespace std;

int main()
{
    int var_x = 0;
    try
    {
        if (var_x < 0)
        {
            throw "Error";
        }
        cout << var_x;
    }
    catch (const char *ptr)
    {
        cout << ptr;
    }
    return 0;
}
