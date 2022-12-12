// 12+i17
#include <iostream>
using namespace std;

class Complex
{
    int R, I;

public:
    Complex(int, int);
    Complex operator++(int);
    Complex &operator++();
    friend ostream &operator<<(ostream &, const Complex &);
};

Complex::Complex(int R, int I) : R(R), I(I)
{
}

Complex &Complex::operator++()
{
    this->R++;
    this->I++;
    return *this;
}

Complex Complex::operator++(int)
{
    Complex obj(this->R, this->I);
    this->R++;
    this->I++;
    return obj;
}

ostream &operator<<(ostream &o, const Complex &obj)
{
    o << obj.R << "+i" << obj.I;
    return o;
}

int main()
{
    Complex obj(10, 15);
    obj++;
    ++obj;
    cout << obj;
    return 0;
}