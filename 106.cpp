//AAC
#include <iostream>
using namespace std;
class Base{
    public:
        Base();
        Base(const Base &);
        void operator = (const Base &);
};
Base::Base(){
    cout << "A";
}
Base::Base(const Base& obj){
    cout << "B";
}
void Base::operator=(const Base& obj){
    cout << "C";
}
int main(){
    Base obj1;
    Base obj2;
    obj2 = obj1;
    return 0;
}