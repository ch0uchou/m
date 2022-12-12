//Char
#include <iostream>
using namespace std;
class Base{
    int x;
    public:
        Base(short);
        Base(int);
        Base(char);
        ~Base();
};
Base::Base(short x){
    cout <<"Short";
}
Base::Base(int x){
    cout <<"Int";
}
Base::Base(char x){
    cout << "Char";
}
Base::~Base(){
    cout << "Final";
}
int main(){
    char x = 64;
    Base *ptr = new Base(x);
    return 0; 
}