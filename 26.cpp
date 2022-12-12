//NTT
#include <iostream>
#include <string>
using namespace std;
int main(){
    const char* arr[]= {"IT", "DUT", "CNTT", "ITF"};
    const char* (*ptr)[4] = &arr;
    cout << ++(*ptr)[2];
    return 0;
}