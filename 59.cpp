//321
#include <iostream>
using namespace std;
void Func(){
    static int var_x = 3;
    cout << var_x;
    if(--var_x)
        Func();
}
int main(){
    Func();
    return 0;
}