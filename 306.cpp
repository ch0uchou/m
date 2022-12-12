#include <iostream>

using namespace std; 
class Base{

Base(){}

Base(int x){}

Base (int x, int y){}
};

class Child: public Base
{
int x;
};
int main()
{
cout << sizeof(Base) << sizeof(Child);

system("pause");

return 0;
}