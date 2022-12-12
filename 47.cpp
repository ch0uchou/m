//Another Answer Garbage Value
#include <iostream>
using namespace std;
class Exam{
    int var_x, var_y;
    public:
        ~Exam();
        void Func(int = 4, int = 6);
        int Area();
};
Exam::~Exam(){

}
void Exam::Func(int var_x, int var_y){
    var_x = var_x;
    var_y = var_y;
}
int Exam::Area(){
    return var_x * var_y;
}
int main(){
    Exam obj;
    obj.Func(3, 4);
    cout << obj.Area();
    return 0;
}