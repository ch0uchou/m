//Complile Error
#include <iostream>
using namespace std;
class Exam{
    static int count;
    public:
        Exam();
        ~Exam();
        void Func();
        friend ostream& operator << (ostream&, const Exam&);
};
int Exam::count = 0;
Exam::Exam(){
    Exam::count++;
}
Exam::~Exam(){
    Exam::count--;
}
void Exam::Func(){
    cout << Exam::count;
}
ostream& operator<<(ostream& o, const Exam& obj){
    o << obj.count;
    return o;
}
int main(){
    Exam obj_x, obj_y;
    Exam obj_z = obj_x + obj_y;
    cout << obj_x << obj_y << obj_z;
}