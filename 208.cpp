// K
#include <iostream>
using namespace std;

template <class T>
class Exam
{
public:
    Exam();
    ~Exam();
    T getData(T);
};

template <class T>
T Exam<T>::getData(T var_x)
{
    return var_x;
}

template <class T>
Exam<T>::Exam()
{
}

template <class T>
Exam<T>::~Exam()
{
}

int main()
{
    Exam<char> obj;
    cout << obj.getData('K');
    return 0;
}