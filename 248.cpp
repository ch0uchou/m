// Compile error
#include <iostream>
using namespace std;

void Show(int &m)
{
    cout << m++;
}

int main()
{
    int x = 1;
    const int y = 1;
    Show(x);
    Show(y);
    return 0;
}