// ITF
#include <iostream>
using namespace std;

class Base{
    public:
        Base();
        ~Base();
};

Base::Base(){
    cout << "ITF";
}

Base::~Base(){
    cout << "DUT";
}

int main(){
    Base obj;
    system("pause");
    return 0;
}