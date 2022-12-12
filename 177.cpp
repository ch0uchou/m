//113
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        Exam(int = 1);
        Exam(const Exam&);
        ~Exam();
        const Exam& operator = (const Exam&);
};
Exam::Exam(int prop): prop(prop){
    cout << "1";
}
Exam::Exam(Exam const& obj): prop(prop){
    cout << "2";
}
Exam::~Exam(){

}
const Exam& Exam::operator=(Exam const& obj){
    if(this != &obj){
        this->prop =obj.prop;
        cout << "3";
    }
    return *this;
}
Exam Func(){
    Exam obj;
    return obj;
}
int main(){
    Exam obj;
    obj = Func();
    return 0;
}