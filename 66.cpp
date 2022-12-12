//Compile Error
#include <iostream>
using namespace std;
#define MAX 10
int main(){
    int var_x = ++MAX;
    cout << var_x;
    return 0;
}