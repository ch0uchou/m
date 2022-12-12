//55
#include <iostream>
using namespace std;
int main(){
    int var_x = 5, var_y;
    int *ptr_x, *ptr_y;
    ptr_x = &var_x;
    ptr_y = &var_y;
    var_y = 5;
    cout << *ptr_x << *ptr_y;
    return 0;
}