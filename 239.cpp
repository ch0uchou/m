// Empty output
#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    Test() { x = 0; }
    void destroy() { delete this; }
    void print() { cout << "x = " << x; }
};

int main()
{
    Test obj;
    obj.destroy();
    obj.print();
    return 0;
}