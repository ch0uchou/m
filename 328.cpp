// free store addr = 0x6d7890
#include <iostream>
using namespace std;

const int bsize = 512;
int *pa;
bool allocate = true;
void get_memory()
{
    cerr << "free store exhausted" << endl;
    delete[] pa;
    allocate = false;
}
void eat_memory(int size)
{
    int *p = new int[size];
    if (allocate)
        eat_memory(size);
    else
        cerr << "free store addr = " << p << endl;
}
int main()
{
    set_new_handler(get_memory);
    pa = new int[bsize];
    cerr << "free store addr = " << pa << endl;
    eat_memory(bsize);
    return 0;
}