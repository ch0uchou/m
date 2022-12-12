//111
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base();
        Base(int);
        Base(Base &);
        void Show();
};
Base::Base(): x(0){

}
Base::Base(int x){
    this->x = x;
}
Base::Base(Base &obj){
    this->x = obj.x;
}
void Base::Show(){
    cout << this->x;
}
int main(){
    Base obj1(1);
    Base obj2(obj1);
    Base obj3 =obj1;
    obj1.Show();
    obj2.Show();
    obj3.Show();
    return 0;
}