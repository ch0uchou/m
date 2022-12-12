// 416
#include <iostream>
using namespace std;

class Test1
{
    int x;

public:
    void show();
};

void Test1::show()
{
}

class Test2
{
    int x;

public:
    virtual void show();
};

void Test2::show()
{
}

int main()
{
    cout << sizeof(Test1) << sizeof(Test2);
    return 0;
}