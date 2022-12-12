//Compile Error
#include <iostream>
using namespace std;
class A{
    public:
        void print();
};
void A::print(){
    cout << "A::print()";
}
class B : private A{
    public:
        void print();
};
void B::print(){
    cout << "B::print()";
}
class C : public B{
    public:
        void print();
};
void C::print(){
    A::print();
}
int main(){
    C b;
    b.print();
}

