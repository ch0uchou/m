//Compile Error
#include <iostream>
using namespace std;
class Exam{
    int prop;
    public:
        Exam(int = 1);
        friend void operator << (Exam, ostream&);
};
Exam::Exam(int prop): prop(prop){

}
void operator << (Exam obj, ostream& o){
    o << obj.prop;
}
int main(){
    Exam obj(2);
    cout << obj;
    return 0;
}
