//4
#include <iostream>
using namespace std;
class Base{
    int arr[10];
    public:
        int& operator [] (const int);
};
int& Base::operator[](const int i){
    return *(this->arr + i);
}
int main(){
    Base obj;
    obj[5]=4;
    cout << obj[5];
    return 0;
}