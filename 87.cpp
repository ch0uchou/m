//27
#include <iostream>
using namespace std;
int main(){
    int arr[] = {0, 2, 4, 6, 7, 5, 3};
    int var_x = 0;
    for(int i = 0; i < 8; i++)
        var_x += arr[i];
    cout << var_x;
    return 0;
}