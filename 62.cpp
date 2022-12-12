//Another Answer Garbage Value
#include <iostream>
using namespace std;
int var_x = 1;
int main(){
    int var_x = 2;
    {
        int var_x = var_x + 1;
        cout << var_x << ::var_x;
    }
    cout << var_x;
}