//11
#include <iostream>
using namespace std;
void Func(const int var_x){
    cout << var_x;
}
int main(){
    int var_x = 1 ;
    const int var_y = 1;
    Func(var_x);
    Func(var_y);
    return 0;
}