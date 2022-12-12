//62
#include <iostream>
using namespace std;
int& Func(int& var_x, int &var_y){
    return (var_x > var_y) ? (++var_x) : (++var_y);
}
int main(){
    int var_x = 5, var_y =10;
    bool var_z = false;
    var_z++;
    bool var_t = Func(var_x, var_y)++;
    cout << var_x << var_y;
    cout << (var_x * var_y) + (var_z + var_t);
}