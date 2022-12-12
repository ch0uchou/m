#include <iostream>
#include <exception>
using namespace std;
int main(){
    try{
        int* x=new int[10000000];
        int* y=new int[10000000];
        int* z=new int[10000000];
        int* t=new int[10000000];
        cout<<"Success !";
    }
    catch(bad_alloc&){
        cout<<"error";
    }
    return 0;
}