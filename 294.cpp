#include <iostream>
using namespace std;
template<class T>
class exam{
    public:
        exam();
        ~exam();
};
template<typename T>
exam<T>::exam(){
    cout<<"C";
}
template<typename T>
exam<T>::~exam(){
    cout<<"D";
}
int main(){
    exam obj;
    return 0;
}
