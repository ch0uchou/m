//Another Answer d9\n9
#include <iostream>
using namespace std;
int Func(char var_x, int var_y){
    cout << var_x << var_y;
    return 0;
}
int (*ptr) (char, int) = Func;
int main(){
    (*ptr)('d', 9);
    ptr(10, 9);
    return 0;
}