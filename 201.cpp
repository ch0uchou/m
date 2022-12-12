// Compile Error
#include <iostream>
using namespace std;

template <class T>
class Exam
{
public:
    Exam Func(const T &, const T &);
};

template <class T>
Exam<T> Exam<T>::Func(const T &var_x, const T &var_y)
{
    return var_x / var_y;
}

int main()
{
    Exam<int> obj;
    cout << obj.Func(3, 2) << obj.Func(3.0, 2.0);
    return 0;
}