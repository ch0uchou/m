//Compile Error
#include <iostream>
using namespace std;
int main(){
    const int var_x = 1;
    int& ref_x = var_x;
    ref_x = 2;
    cout << var_x << ref_x;
}