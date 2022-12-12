//Print ASCII value of 99 c
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base(int, float);
};
Base::Base(int x, float y){
    cout << char(y);
}
int main(){
    Base *ptr = new Base(35, 99.5f);
    return 0;
}