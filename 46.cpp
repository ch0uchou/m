//222
#include <iostream>
using namespace std;
int main(){
    int var_x = 1;
    int& ref_x = var_x;
    int var_y = 2;
    ref_x = var_y;
    cout << var_x << ref_x << var_y;
    return 0;
}