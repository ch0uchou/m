//Compile Error
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        Exam* operator->();
        friend ostream& operator<<(ostream&, const Exam&);
};
Exam* Exam::operator->(){
    return this;
}
ostream& operator << (ostream& o, const Exam& obj){
    o << obj.prop;
    return o;
}
int main(){
    Exam obj;
    obj->prop = 10;
    cout << obj << obj->prop;
    return 0;
}