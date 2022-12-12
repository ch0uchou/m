// CE do mơ hồ
#include <iostream>
using namespace std;

template <class T>
T Func(T var_x)
{
    cout << var_x;
    return var_x;
}
template <class U>
void Func(U var_x)
{
    cout << var_x;
}
int main()
{
    int var_x = 5;
    int var_y = Func(var_x);
    return 0;
}