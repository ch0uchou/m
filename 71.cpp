//Compile Error
#include <iostream>
using namespace std;
int main(){
    int var_x = 5;
    int* ptr = &var_x;
    int& ref_x = ptr;
    cout << ptr;
    return 0;
}