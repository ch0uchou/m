//ITF
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base();
        Base(const Base&);
        Base& operator = (const Base&);
};
Base::Base() : x(0){

}

Base::Base(const Base& obj){
    this->x = obj.x;
    cout << "ITF";
}

Base& Base:: operator=(const Base& obj){
    this->x= obj.x;
    cout << "DUT";
    return *this;
}
int main(){
    Base obj1, obj2;
    Base obj3(obj1);
    return 0;
}