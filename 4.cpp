//Compile Error
#include <iostream>
using namespace std;
const int& Func(){
    static int var_x = 1;
    return var_x;
}
int main(){
    cout << Func() << (Func())++;
}