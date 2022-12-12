//Garbage Value
#include <iostream>
using namespace std;
class Base{
    int x, y;
    public:
        void SetData(int &, int &);
};
void Base::SetData(int &x, int &y){
    x = x++;
    y = y;
    cout << this->x << this->y;
}
int main(){
    int x = 1;
    int &y = x;
    Base obj;
    obj.SetData(x, y);
    return 0;
}
