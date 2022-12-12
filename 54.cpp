//112
#include <iostream>
using namespace std;
int var_x = 1;
int& Func(){
    static int var_x = ::var_x++;
    return var_x;
}
int main(){
    cout << var_x;
    cout << Func();
    Func()++;
    cout << Func();
    return 0;
}