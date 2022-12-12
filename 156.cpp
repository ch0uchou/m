//5500.263
#include <iostream>
using namespace std;
void Show(int x){
    cout << x;
}
void Show(double x){
    cout << x;
}
int main(void){
    Show(5);
    Show(500.263);
    return 0;
}