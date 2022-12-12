// 9
#include <iostream>
using namespace std;

namespace Exam
{
    int var_x = 9;
    int var_y = 1;
}

namespace var_y = Exam;

int main()
{
    cout << var_y::var_x;
    return 0;
}