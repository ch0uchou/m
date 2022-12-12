//Compile Error
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base(int = 1);
        friend void operator << (Base&, ostream &);
};
Base::Base(int x): x(x){

}
void operator << (Base& obj, ostream &o){
    o << obj.x;
}
int main(){
    Base obj(2);
    cout << obj;
    return 0;
}