// 40
#include <iostream>
using namespace std;

class Exam{
        double prop;

    public:
        friend void Func(Exam &);
        void Func(double);
        void setProp(double);
};

void Exam::setProp(double prop){
    this->prop = prop;
}

void Exam::Func(double prop){
    this->prop *= 2;
}

void Func(Exam &obj){
    obj.Func(obj.prop);
    obj.prop *= 2;
    cout << obj.prop;
}

int main(){
    Exam obj;
    obj.setProp(10.0);
    Func(obj);
    return 0;
}