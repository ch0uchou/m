//1
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        Exam(int = 1);
        ~Exam();
        const int getProp();
};
Exam::Exam(int prop): prop(prop){

}
Exam::~Exam(){

}
const int Exam::getProp(){
    return this->prop;
}
int main(){
    Exam obj;
    cout << obj.getProp();
    return 0;
}
