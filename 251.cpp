// Compile error
#include <iostream>
using namespace std;

int Func(void *ptr)
{
    cout << ptr;
    return 0;
}

int main()
{
    const char *ptr = "DUT";
    Func(const_cast<void *>(ptr));
    return 0;
}