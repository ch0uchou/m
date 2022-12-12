// Inherited
#include <iostream>
using namespace std;

struct BaseA
{
    int prop_a;
};
struct BaseB
{
    int *prop_b;
};
struct BaseC : public BaseA, public BaseB
{
};
int main()
{
    BaseC *ptr = new BaseC;
    ptr->prop_b = 0;
    cout << "Inherited";
    cout << ptr->prop_b << endl;
    return 0;
}