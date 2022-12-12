// Compile error
#include <iostream>
using namespace std;

int main()
{
    bool var_x = true;
    var_x++;
    cout << var_x;
    return 0;
}