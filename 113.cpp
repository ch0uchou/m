//ITFDUT
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        Exam();
        Exam(const Exam&);
        Exam& operator=(const Exam&);
};
Exam::Exam(): prop(0){

}
Exam::Exam(const Exam& obj){
    this->prop = obj.prop;
    cout << "ITF";
}
Exam& Exam::operator=(const Exam& obj){
    this->prop = obj.prop;
    cout << "DUT";
    return *this;
}
int main(){
    Exam obj1, obj2;
    Exam obj3(obj1);
    obj2 = obj1;
    return 0;
}