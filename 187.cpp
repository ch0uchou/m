// 2.13.14.1
#include <iostream>
using namespace std;

template <typename T>
void loopIT(T x)
{
    int count = 3;
    T val[3];
    for (int ii = 0; ii < count; ii++)
    {
        val[ii] = x++;
        cout << val[ii];
    }
}
int main()
{
    float xx = 2.1;
    loopIT(xx);
    return 0;
}