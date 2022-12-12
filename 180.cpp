//180
#include <iostream>
using namespace std;
class Base{
    int x; double y;
    public:
        void Func(int = 0, double = 0.00, char = 'A');
        void Func(double, int = 10.00, char = 'Z');
        void Func(char, char, char);
};
void Base::Func(int x, double y, char z){
    this->x = x +int(y);
    cout << this->x;
}
void Base::Func(double x, int y, char z){
    this->x = z + z;
    this->y = x + y;
    cout << this->x; 
}
void Base::Func(char x, char y, char z){
    this->x = x + y + z;
    this->y = double(x * 2);
    cout << this->x;
}
int main(){
    Base obj;
    obj.Func(10*1.0, int (56.0));
    return 0;
}