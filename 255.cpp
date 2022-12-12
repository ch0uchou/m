// 28
#include <iostream>
using namespace std;

template <class T, class U>
class Exam
{
    T var_x;
    U var_y;
    static int count;
};

int main()
{
    Exam<char, char> var_x;
    Exam<int, int> var_y;
    cout << sizeof(var_x) << sizeof(var_y);
    return 0;
}