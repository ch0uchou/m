//76
#include <iostream>
using namespace std;
class Base{
    int *ptr;
    public:
        Base(int, char);
        ~Base();
};
Base::Base(int x, char y){
    this->ptr = new int;
    *(this->ptr) = x + int(y);
    cout << *(this->ptr);
}
Base::~Base(){
    delete ptr;
}
int main(){
    Base obj(10, 'B');
    return 0;
}