//34567891011
#include <iostream>
using namespace std;
int main(){
    enum Exam{
        JAN = 1, FEB, MAR,
        APR, MAY, JUN,
        JUL, AUG, SEP,
        OCT, NOV, DEC
    };
    for (int i = MAR; i <= NOV; ++i)
        cout << i;
    return 0;
}