//Compile Error
#include <iostream>
using namespace std;
int Sum(int x, int y, int z){
    return x+y;
}
double Sum(double x, double y, double z){
    return x+y;
}
int main(){
    cout << Sum(5, 6);
    cout << Sum(5.5, 6.6);
    return 0;
}