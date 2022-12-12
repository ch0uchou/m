#include<iostream>
#include<exception>
using namespace std;
class mypp:public exception{
    virtual const char* what() const throw(){
        return "error";
    }
} me;
int main(){
    try{
        throw me;
    }
    catch (exception & e){
        cout<<e.what();
    }
    return 0;
}