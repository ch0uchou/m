// Compile error
#include <iostream>
using namespace std;

int main()
{
    int var_x = 5;
    int *ptr = &var_x;
    int &ref_x = var_x;
    cout << *ptr << ", " << *ref_x;
    return 0;
}