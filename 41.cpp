//Compile Error
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        ~Exam();
        int setProp(int) const;
        int getProp() const;
};
Exam::~Exam(){

}
int Exam::setProp(int prop) const{
    this->prop = prop;
}
int Exam::getProp() const{
    return this->prop;
}
int main(){
    Exam obj;
    obj.setProp(5);
    cout << obj.getProp();
    return 0;
}