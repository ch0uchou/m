//23
#include <iostream>
using namespace std;
class Base{
    public:
        int x, y;
        Base(int = 1, int = 2);
        void Swap(int *, int *);
};
Base::Base(int x, int y): x(x), y(y){

}
void Base::Swap(int *ptr1, int *ptr2){
    int t;
    t =*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = t;
}
int main(){
    Base obj1(3, 4);
    Base obj2(5);
    obj1.Swap(&obj1.x, &obj2.y);
    cout << obj1.x << obj2.y;
    return 0;
}