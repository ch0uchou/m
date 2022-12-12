//45
#include <iostream>
using namespace std;
int main(){
    int arr[] = {0, 1, 2, 3};
    int* ptr_x = arr + 1;
    int* ptr_y = arr + 2;
    int var_x = ++*ptr_x + *ptr_y++;
    int var_y = *++ptr_x + *ptr_y--;
    cout << var_x << var_y;
}