//Compile Error
#include <iostream>
using namespace std;
int Func(int, int);
int Func(int, int, int = 5);
int main(){
    cout << Func(2, 4);
    return 0;
}
int Func(int x, int y){
    return x*y;
}
int Func(int x, int y, int z){
    return x*y*z;
}