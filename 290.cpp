#include <iostream>
using namespace std;
template <typename T,typename U>
void func(T x,U y){
    cout<<x<<x*x<<y<<y*y;
};
int main(){
    int x=2;
    double y=2.1;
    func<int,double>(x,y);
    return 0;
}