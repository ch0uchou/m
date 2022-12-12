//012
#include <iostream>
using namespace std;
int main(){
    int i = 0, var_x = 0;
    do{
        if(i%5 == 0){
            cout << var_x;
            var_x ++;
        }
        ++i;
    }while(i<10);
    cout << var_x;
}