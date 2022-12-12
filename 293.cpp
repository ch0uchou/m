#include <iostream>
using namespace std;
void func(){
    throw 3;
}
int main(){
    try{
        func();
    }
    catch (double){
        cerr <<"error";
    }
    return 0;
}