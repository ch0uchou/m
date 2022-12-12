//KHO
#include <iostream>
#include <string>
using namespace std;
class Base{
    public:
        void GetData(char *, int , int);
};
void Base::GetData(char *ptr, int x, int y){
    for (int i = x - 1; y > 0; ++i){
        cout << *(ptr +i);
        y--;
    }
}
int main(){
    Base obj;
    obj.GetData((char*)"KHOACNTT", 1, 3);
    return 0;
}