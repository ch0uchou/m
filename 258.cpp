//  10 20 0 100 0
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector(5);
    int *p = myvector.data();
    *p = 10;
    ++p;
    *p = 20;
    p[2] = 100;
    for (unsigned i = 0; i < myvector.size(); ++i)
        cout << ' ' << myvector[i];
    return 0;
}