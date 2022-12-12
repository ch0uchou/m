//ITF
#include <iostream>
using namespace std;
class Exam{
    public:
        Exam();
        Exam(Exam const&);
        Exam& operator = (Exam const&);
};
Exam::Exam(){
    cout << "ITF";
}
Exam::Exam(Exam const&){
    cout << "DUT";
}
Exam& Exam::operator=(Exam const&){
    cout << "CNTT";
    return *this;
}
Exam Func(){
    Exam obj;
    return obj;
}
int main(){
    Exam obj = Func();
    return 0;
}