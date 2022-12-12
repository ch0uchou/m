//6default10
#include <iostream>
using namespace std;
template <class T = float, int i = 5>
class Exam{
    public:
        int prop;
        Exam();
};
template <class T, int i>
Exam<T, i>::Exam(): prop(i){
    cout << this->prop;
}
template<>
class Exam<>{
    public:
        Exam();
};
Exam<>::Exam(){
    cout << "default";
}
template<>
class Exam<double, 10>{
    public:
        Exam();
};
Exam<double,10>::Exam(){
    cout << "10";
}
int main(){
    Exam <int,6> obj_x;
    Exam<> obj_y;
    Exam<double, 10> obj_z;
    return 0;
}