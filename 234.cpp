//Destructor Exam A
//Destructor Exam A
//Destructor Exam A
//Operator delete[] ExamA
#include <iostream>
using namespace std;

class ExamA{
    public:
        virtual ~ExamA();
        void operator delete[](void *, size_t);
};

ExamA::~ExamA(){
    cout << "Destructor Exam A" << endl;
}

void ExamA::operator delete[](void *ptr, size_t){
    cout << "Operator delete[] ExamA" << endl;
    delete[] ptr;
}

class ExamB : public ExamA{
    public:
        void operator delete[](void *, size_t);
};

void ExamB::operator delete[](void *ptr, size_t){
    cout << "Operator delete[] ExamB" << endl;
    delete[] ptr;
}

int main(){
    ExamA *ptr = new ExamB[3];
    delete[] ptr;
    return 0;
}