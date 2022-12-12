// Another Answer Base::Base(int _i = 0, int _j = 0): i(_i), j(_j){} khong duoc truyen doi so mac dinh, i va j private trong Base
#include <iostream>
using namespace std;

class Base
{
private:
    int i, j;

public:
    Base(int = 0, int = 0);
};

Base::Base(int _i = 0, int _j = 0) : i(_i), j(_j)
{
}

class Derived : public Base
{
public:
    void show();
};

void Derived::show()
{
    cout << this->i << this->j;
}

int main()
{
    Derived d;
    d.show();
    return 0;
}
// A. 00
// B. Compile Error: Could not call constructor of Base
// C. Runtime Error
// D. Another Answer
// E. Compile Error: i and j are private in Base
