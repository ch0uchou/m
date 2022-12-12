//CD
#include <iostream>
using namespace std;

class main{
    public:
        main();
        ~main();
};

main::main(){
    cout << 'C';
}

main::~main(){
    cout << 'D';
}

main obj;

int main(){
    return 0;
}