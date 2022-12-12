#include<iostream>
using namespace std;
class Base{
double prop_b;
public:
virtual void Func();
};
void Base::Func(){
cout << "1";
} 
class Derived: public Base{
int prop_d = 15;
public:
void Func();
};
void Derived:: Func(){
cout << "2";
}
int main()
{
Base* ptr = new Base();
Derived obj;
ptr = &obj;
ptr->Func();
return 0;
}