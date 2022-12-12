//7*Address Memory*8514
#include <iostream>
using namespace std;
int main(){
    double arr[] {5.0, 6.0, 7.0, 8.0};
    double *ptr = (arr + 2);
    cout << *ptr << arr << *(arr + 3) << *(arr) << *arr + 9;
}