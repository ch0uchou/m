#include <iostream> 
using namespace std; 
template<class T>
class Exam{
public:
Exam(); 
~Exam();
};
template<class T> 
Exam<T>::Exam() {
cout << "C";
}
template<class T>
Exam<T>::~Exam() {
cout << "D";
}
int main()
{
Exam<int> obj_i;
Exam<char> obj_c;
Exam<double> obj_d;
return 0;
}