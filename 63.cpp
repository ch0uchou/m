//Address of ptr1""Address of x"3
#include <iostream>
using namespace std;
int main(){
    int var_x = 3;
    int *ptr_x;
    int **ptr_y;
    ptr_x = &var_x;
    ptr_y = &ptr_x;
    cout << ptr_y << *ptr_y << **ptr_y;
}