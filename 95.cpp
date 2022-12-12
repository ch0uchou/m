//CNTT
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base(int = 0);
        void Show();
};
Base::Base(int x){
    this->x = x;
}
void Base::Show(){
    cout << "CNTT";
}
int main(){
    Base *ptr = 0;
    ptr->Show();
    return 0;
}