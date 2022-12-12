// Garbage value
#include <iostream>
using namespace std;
#define SquareOf(var_x) var_x *var_x

int main()
{
    int var_x;
    cout << SquareOf(var_x + 4);
    return 0;
}