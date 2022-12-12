//12
#include <iostream>
using namespace std;
class Exam{
    private:
        ~Exam();
        friend void Func(Exam*);
};
Exam::~Exam(){
    cout << "1";
}
void Func(Exam* ptr){
    delete ptr;
    cout << "2";
}
int main(){
    Exam* ptr = new Exam;
    Func(ptr);
    return 0;
}