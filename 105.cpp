//Compile Error
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base(int = 1);
        friend void operator << (Base, ostream &); 
};
Base::Base(int x): x(x){

}
void operator << (Base obj, ostream &o){
    o <<obj.x;
}
int main(){
    Base obj1(2), obj2;
    cout << obj1 << obj2;
    return 0;
}
