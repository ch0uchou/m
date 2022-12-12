//Compile Error
#include <iostream>
using namespace std;
int main(){
    int var_x = 2, var_y = 6;
    int& ref_x = var_x++;
    int& ref_y = var_y++;
    var_x = ref_x++; ref_x = var_x++;
    var_y = ref_y++; ref_y = var_y++;
    cout << var_x << var_y;
}