//B
#include <iostream>
using namespace std;
struct A{
    virtual ~A(){

    };
    void operator delete(void*);
};
void A::operator delete(void* p){
    cout << "A";
}
struct B : A{
    void operator delete(void*);
};
void B::operator delete(void* p){
    cout << "B";
}
int main(){
    A* ap = new B;
    delete ap;
    return 0;
}