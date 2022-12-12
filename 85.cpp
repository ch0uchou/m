//1010
#include <iostream>
using namespace std;
int main(){
    int var_x, var_y = 10;
    var_x = (var_y++, var_y + 100, 999 + var_y);
    cout << var_x;
}