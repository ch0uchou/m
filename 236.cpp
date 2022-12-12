// 10
#include <iostream>
using namespace std;

namespace ExamA
{
    int var_x = 5;
    int var_y = 10;
}

namespace ExamB
{
    double var_x = 3.1416;
    double var_y = 2.7183;
}

int main()
{
    using ExamA::var_x;
    using ExamB::var_y;
    bool var_z, var_t;
    var_z = var_x > var_y;
    var_t = ExamA::var_y < ExamB::var_x;
    cout << var_z << var_t;
    return 0;
}