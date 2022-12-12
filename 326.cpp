// 16 24
#include <iostream>
using namespace std;

template <class T, class U, class V = double>
class Exam
{
    T prop_x;
    U prop_y;
    V prop_z;
};

int main()
{
    Exam<int, int> obj_ii;
    Exam<double, double> obj_dd;
    cout << sizeof(obj_ii) << " " << sizeof(obj_dd);
}
