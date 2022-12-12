// Compiler Error
#include <iostream>
using namespace std;

class P
{
public:
    virtual void show() = 0;
};
class Q : public P
{
    int x;
};
int main()
{
    Q q;
    system("pause");
    return 0;
}