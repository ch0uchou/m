//1
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        Exam (int=1);
        int operator , (int);
};
Exam::Exam(int prop):prop(prop){

}
int Exam::operator, (int prop){
    return this->prop;
}
int main(){
    Exam obj;
    int var_i = 2;
    cout << obj.operator,(var_i);
    return 0;
}