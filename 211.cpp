//8
#include <iostream>
using namespace std;
int main(){
    char* ptr;
    try{
        ptr = new char [1024];
        if (ptr == 0)
            throw "Error!";
        else   
            cout << sizeof(ptr);
    }
    catch (char* e){
        cout << e;
    }
    return 0;
}