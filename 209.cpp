// Compile Error
#include <iostream>
using namespace std;

void Func(char var_c)
{
    if (var_c < numeric_limits<char>::max())
        return invalid_argument;
}

int main()
{
    try
    {
        Func(256);
    }
    catch (invalid_argument &e)
    {
        cerr << e.what();
        return -1;
    }
    return 0;
}