#include <iostream> 
using namespace std; 
struct A{
    private:
    public:
        int i, j, k;
        int f(); 
        void g();
};
int A::f(){
return i+j+k;
} 
void A::g()
{
i = j = k = 0;
}
class B
{
    int i, j, k; 
public:
    int f();
    void g();
}; 
int B::f(){
    return this->i + this->j + this->k;
} 
void B::g()
{
    this->i = this->j = this->k = 0;
}


int main(){
A a;
B b;
a.f();
a.g();
b.f();
b.g();
cout << "Done"; 
system("pause");
return 0;
}