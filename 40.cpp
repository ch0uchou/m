//Compile Error
#include <iostream>
using namespace std;
void Func(float, float = 5.0);
class Base{
    float x, y;
    public:
        void Func(float, float = 5.0);
};
void Base::Func(float x, float y) : x(x), y(y){
    cout << ++this->x % --this->y;
}
int main(){
    Base obj;
    obj.Func(5.0, 5.0);
    return 0;
}