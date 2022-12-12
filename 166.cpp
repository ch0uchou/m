//3
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base(int = 0);
        Base operator+(int);
        friend ostream& operator <<(ostream &, Base); 
};
Base::Base(int x): x(x){

}
Base Base::operator+ (int x){
    Base obj;
    obj.x = this->x +x;
    return obj;
}
ostream& operator << (ostream &o, Base obj){
    o << obj.x;
    return o;
}
int main(){
    Base obj1(1), obj2;
    obj2 = obj1 + 2;
    cout << obj2;
    return 0;
}