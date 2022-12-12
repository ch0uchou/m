//ITF
#include <iostream>
using namespace std;

class Exam{
    public:
        Exam();
        ~Exam();
};
Exam::Exam(){
    cout << "ITF";
}
Exam::~Exam(){

}
int main(){
    Exam obj;
    return 0;
}