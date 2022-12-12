//Compile Error at line 5
#include <iostream>
using namespace std;
int main(){
    const int var_x = 10;
    const int var_y = var_x + 10; //line 4
    cout << var_x++; //line 5
    return 0;
}