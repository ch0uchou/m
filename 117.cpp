//1014
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        Exam();
        Exam(double);
        ~Exam();
        friend ostream& operator << (ostream&, const Exam&);
};
Exam::Exam(){

}
Exam::Exam(double prop): prop(prop){

}
Exam::~Exam(){

}
ostream& operator << (ostream& o, const Exam& obj){
    o << obj.prop;
    return o;
}
int main(){
    Exam obj_x(10);
    Exam obj_y = Exam(14);
    cout << obj_x << obj_y;
    return 0;
}