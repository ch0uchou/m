//34
#include <iostream>
using namespace std;
long Func(long int var_x){
    return --var_x;
}
float Func(int var_x){
    return ++var_x;
}
int main(){
    int var_x = 2, var_y = 3;
    cout << Func(var_x) << Func(var_y);
}