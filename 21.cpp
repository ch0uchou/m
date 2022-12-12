//2222
#include <iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,4};
    int& ref_x = arr[0];
    for (int i=0; i<4; i++)
        arr[i] += arr[i];
    for (int i=0; i<4; i++)
        cout << ref_x;
    return 0;
}