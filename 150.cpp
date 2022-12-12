// 12344321
#include <iostream>
using namespace std;

int x = 0;

class Base{
    public:
        Base();
        ~Base();
};

Base::Base(){
    cout << ++x;
}

Base::~Base(){
    cout << x--;
}

void Func(){
    Base obj1, obj2, obj3;
    {
        Base obj4;
    }
}

int main(){
    Func();
    system("pause");
    return 0;
}