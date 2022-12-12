//"Address of var_x"'Address of var_x
#include <iostream>
using namespace std;
int main(){
    int var_x = 5;
    int *ptr = &var_x;
    cout << *&ptr << &*ptr;
    return 0;
}