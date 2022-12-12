// Compile error if no cstring
// Empty output with cstring
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    try
    {
        char *ptr;
        strcpy(ptr, "ITF");
    }
    catch (const exception &e)
    {
    }
    return 0;
}