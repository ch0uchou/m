//Compile Error
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base(int = 1);
        friend ostream& operator << (Base&, ostream&);
};
Base::Base(int x): x(x){

}
ostream& operator<<(Base& obj, ostream &o){
    o << obj.x;
    return o;
}
int main(){
    Base obj1(2), obj(2);
    obj1 << obj2 << cout;
    return 0;
}