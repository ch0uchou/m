//5.5IT
#include <iostream>
#include <string>
using namespace std;
template<typename T>
void Func(T var_x){
    cout << var_x;
}
int main(){
    double var_x = 5.5;
    string str("IT");
    Func(var_x);
    Func(str);
    return 0;
}