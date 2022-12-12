//22
#include <iostream>
using namespace std;
class Base{
    int x, y;
    public:
        void SetData(int &, int &);
        void Show();
};
void Base::SetData(int &x, int &y){
    x = 2;
    this->x = x;
    this->y = y;
    this->Show();
}
void Base::Show(){
    cout << this->x << this->y;
}
int main(){
    int x = 1;
    Base obj;
    obj.SetData(x, x);
    return 0;
}