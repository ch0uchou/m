//Allocated
#include <iostream>
#include <exception>
using namespace std;
int main(){
    try{
        int *arr = new int [1000];
        cout << "Allocated";
    }
    catch(exception & e){
        cout << "Standard exception: "<< e.what();
    }
    return 0;
}