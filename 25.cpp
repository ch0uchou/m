//101010
#include <iostream>
using namespace std;

class Exam{
    static int count;
    public:
        ~Exam();
        void setCount(int count);
        void printCount();
};
int Exam::count = 5;
Exam::~Exam(){

}
void Exam::printCount(){
    cout << Exam::count;
}
void Exam::setCount(int count){
    Exam::count = count;
}
int main(){
    Exam obj_x = Exam();
    Exam obj_y = Exam();
    Exam obj_z = Exam();
    obj_x.setCount(10);
    obj_x.printCount();
    obj_y.printCount();
    obj_z.printCount();
    return 0;
}