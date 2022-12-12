// CE: i j private
#include <iostream>
using namespace std;

class Base
{
private:
    int i, j;

public:
    int geti()
    {
        return i;
    }
    int getj()
    {
        return j;
    }
    Base(int = 0, int = 0);
};

Base::Base(int _i, int _j) : i(_i), j(_j)
{
}

class Derived : public Base
{
public:
    void show();
};

void Derived::show()
{
    cout << geti() << getj();
}

int main()
{
    Derived d;
    d.show();
}