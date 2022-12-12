// terminate called after throwing an instance of 'int'
#include <iostream>
using namespace std;

void Func(int var_i)
{
    try
    {
        if (var_i > 0)
            throw var_i;
        else
            throw 'i';
    }
    catch (char)
    {
        cout << var_i;
    }
}

int main()
{
    Func(10);
    Func(0);
    return 0;
}