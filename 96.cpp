//1020304050
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int *ptr = arr;
    *ptr = 10;
    ptr++;
    *ptr = 20;
    ptr = &arr[2];
    *ptr = 30;
    ptr = arr + 3;
    *ptr = 40;
    ptr = arr;
    *(ptr + 4) = 50;
    for (int i = 0; i < 5; i++)
        cout << arr[i];
    return 0;
}