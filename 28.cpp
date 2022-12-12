//10
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        ~Exam();
        int getProp();
        void setProp(int);
};
Exam::~Exam(){

}

int Exam::getProp(){
    return this->prop;
}
void Exam::setProp(int prop){
    this->prop = prop;
}
int main(){
    Exam obj;
    obj.setProp(10);
    cout << obj.getProp();
    return 0;
}