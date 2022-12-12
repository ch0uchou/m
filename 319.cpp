#include <iostream>
using namespace std;
template <class T>
class Exam
{
public:
    Exam();
    ~Exam();
};
template <typename T>
Exam<T>::Exam()
{
    cout << "C";
}
template <typename T>
Exam<T>::~Exam()
{
    cout << "D";
}
int main()
{
    Exam<int> obj;
    return 0;
}