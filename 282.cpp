// 0
#include <iostream>
using namespace std;

int main()
{
    char *ptr;
    unsigned long int var_x = (size_t(0) / 3);
    cout << var_x;
    try
    {
        ptr = new char[size_t(0) / 3];
        delete[] ptr;
    }
    catch (bad_alloc &e)
    {
        cout << e.what();
    };
    return 0;
}