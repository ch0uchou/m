// Q
#include <iostream>
using namespace std;

class P
{
public:
    void print();
};

void P::print()
{
    cout << "P";
}

class Q : public P
{
public:
    void print();
};

void Q::print()
{
    cout << "Q";
}

class R : public Q
{
};

int main(void)
{
    R r;
    r.print();
    system("pause");
    return 0;
}