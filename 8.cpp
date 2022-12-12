//Int
#include <iostream>
using namespace std;
class Base{
    short x;
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
    Base *ptr = new Base(cin.get());
    return 0; 
}
