//46.5
#include <iostream>
using namespace std;

double& Func(){
    double var_x = 46.50, & ref_x = var_x;
    return ref_x;
}
int main(){
    double var_x = Func();
    cout << var_x;
    return 0;
}