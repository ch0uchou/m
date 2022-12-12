//10
#include <iostream>
using namespace std;
int Func(int var_x){
    return (var_x % 2 == 0)? var_x + 1 : (var_x - 1) * Func(var_x + 1);
}
int main(){
    cout << Func(3);
}