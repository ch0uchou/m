//32
#include <iostream>
using namespace std;
class Base{
    public:
        void Func(int = 1, int = 1);
};
void Base::Func(int x, int y){
    int z = 1, i =1;
    while (++i <= y)
        z *= x;
    cout << z;
}
int main(){
    Base obj;
    obj.Func(2, 6);
    return 0;
}