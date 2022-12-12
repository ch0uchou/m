// Compile Error
#include <iostream>
using namespace std;
int main(){
    int var_x = 5, var_y = 6;
    int * const ptr = &var_x;
    ptr = &var_y;
    cout << *ptr;
}