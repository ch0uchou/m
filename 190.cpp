// 100200
#include <iostream>
using namespace std;

class Base1
{
protected:
    int SampleDataOne;

public:
    Base1();
    ~Base1();
    int SampleFunctOne();
};

Base1::Base1()
{
    this->SampleDataOne = 100;
}

Base1::~Base1()
{
}

int Base1::SampleFunctOne()
{
    return this->SampleDataOne;
}

class Base2
{
protected:
    int SampleDataTwo;

public:
    Base2();
    ~Base2();
    int SampleFunctTwo();
};

Base2::Base2()
{
    this->SampleDataTwo = 200;
}

Base2::~Base2()
{
}

int Base2::SampleFunctTwo()
{
    return this->SampleDataTwo;
}

class Derived1 : public Base1, public Base2
{
    int MyData;

public:
    Derived1();
    ~Derived1();
    int MyFunct();
};

Derived1::Derived1()
{
    this->MyData = 300;
}

Derived1::~Derived1()
{
}

int Derived1::MyFunct()
{
    return (this->MyData + this->SampleDataOne + this->SampleDataTwo);
}

int main()
{
    Base1 SampleObjOne;
    Base2 SampleObjTwo;
    Derived1 SampleObjThree;
    cout << SampleObjThree.Base1::SampleFunctOne() << SampleObjThree.Base2::SampleFunctTwo();
    return 0;
}