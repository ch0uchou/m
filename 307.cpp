#include<iostream>
using namespace std;
class Base
{
int x, y, z; 
public:

Base(){
x = y = z = 8;
}
Base (int xx, int yy = 'A', int zz = '8'){
x = xx; y = yy; z + y;
}
void Display(){
cout << x << y << z;
}
};
class Derived :public Base
{
int x, y; public:

Derived (int xx = 65, int yy =66) :Base(xx, yy){

y = xx; x = yy;

} 
void Display(){

cout << x << y; 
Display();
}
};
int main(){

Derived objD; 
objD.Display();

system("pause");

return 0;
}