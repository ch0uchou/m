// 1111 do tự ép kiểu gần nhất
#include <iostream>
using namespace std;

class One
{
public:
    double add(double x)
    {
        cout << 'a';
        return x + 0.1;
    }
};

class Two : public One
{
public:
    int add(int x)
    {
        cout << 'b';
        return x + 1;
    }
};

int main()
{
    Two obj;
    cout << obj.add(10) << obj.add(10.5);
    system("pause");
    return 0;
}