//Compile Error
#include <iostream>
using namespace std;

int Func(int, int);
int Func(int, int, int = 15);

int main()
{
    cout << Func(2, 4);
    system("pause");
    return 0;
}

int Func(int x, int y)
{
    return x * y;
}

int Func(int x, int y, int z = 5)
{
    return x * y * z;
}