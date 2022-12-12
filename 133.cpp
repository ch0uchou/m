// 0
#include <iostream>
using namespace std;

class Base
{
public:
    struct Struct
    {
        int x;
        float y;
        void Func()
        {
            y = x = (x = 4 * 4);
            y = --y * y;
        }
        void Show()
        {
            cout << y;
        }
    } obj2;
} obj1;

int main()
{
    obj1.obj2.Show();
    return 0;
}
