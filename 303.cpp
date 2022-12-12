#include <iostream>
using namespace std;
template<class T>
class exam{
    public:
        T func(const T&,const T&);
};
template<class T>
T exam<T>::func(const T& x,const T& y){
    return x/y;
}
int main(){
    exam<char> obj;
    cout << obj.func(65, 1) << obj.func(65.28, 1.1);

return 0;
}