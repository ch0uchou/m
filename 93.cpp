//-6
#include <iostream>
using namespace std;
int Func(int var_x, int var_y = 3, int var_z = 3){
    cout << ++var_x * ++var_y * --var_z;
    return 0;
}
int main(){
    Func(5, 0, 0);
    return 0;
}