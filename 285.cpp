//Q3
#include <iostream>
using namespace std;
template<class T,class U,class V=double>
class exam{
    T x;
    U y;
    V z;
};
int main(){
    exam<int,int> ii;
    exam<double,double> dd;
    cout<<sizeof(ii)<<sizeof(dd);
    return 0;
}