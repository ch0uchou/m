//Compile Error
#include <iostream>
using namespace std;

int main(){
    int& ref_x = 5;
    cout << ref_x;
}