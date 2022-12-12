//T
#include <iostream>
#include <string>
using namespace std;
int main(){
    const char* ptr = new char [4];
    ptr = "DUT";
    cout << *(ptr + 2);
    return 0;
}