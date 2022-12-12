//3010
#include <iostream>
using namespace std;
int var_x = 10;
int main(){
    int var_x = 20;
    {
        int var_x = 30;
        cout << var_x << ::var_x;
    }
    return 0;
}