//CCCDDD
#include <iostream>
using namespace std;
class Exam{
    public:
        Exam();
        ~Exam();
};
Exam::Exam(){
    cout << "C";
}

Exam::~Exam(){
    cout << "D";
}
int main(){
    Exam* ptr = new Exam[3];
    delete [] ptr;
    return 0;
}