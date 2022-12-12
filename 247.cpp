// Compile error
#include <iostream>
using namespace std;

int Func(int x = 0, int y = 0, int z)
{
    return (x + y + z);
}

int main()
{
    cout << Func(1);
    return 0;
}