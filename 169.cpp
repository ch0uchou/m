//21
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base(int = 1);
        friend ostream& operator << (ostream &, Base&);
};
Base::Base(int x): x(x){

}
ostream& operator << (ostream &o, Base& obj){
    o << obj.x;
    return o;
}
int main(){
    Base obj1(2), obj2;
    cout << obj1 << obj2;
    return 0;
}