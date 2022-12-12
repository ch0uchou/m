//2
#include <iostream>
using namespace std;
int main(){
    enum Exam{
        Exam1 = 1,
        Exam2,
        Exam3
    };
    int var_x = Exam3;
    int& ref_x = var_x;
    int& ref_y = var_x;
    ref_x = Exam2;
    cout << ref_y--;
}