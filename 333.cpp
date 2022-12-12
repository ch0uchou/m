// CE
// Không có catch thì phải không có catch luôn
// Còn một khi đã có thì phải có catch của full kiểu dữ liệu
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void Func(int var_i)
{
    try
    {
        if (var_i > 0)
            throw var_i;
        else
            throw 'i';
    }
    catch (int)
    {
        cout << "dit me";
    }
    catch (char)
    {
        cout << var_i;
    }
}
int main()
{
    Func(10);
    Func(0);
    return 0;
}