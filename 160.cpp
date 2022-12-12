//5
#include <iostream>
using namespace std;
class Exam{
    public:
        void operator ()(int);
};

void Exam::operator()(int var_i){
    cout << var_i;
}
int main(){
    Exam obj;
    obj(5);
    return 0;
}