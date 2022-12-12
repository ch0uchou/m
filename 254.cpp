// 1 3 6 10 15
#include <iostream>
#include <functional>
#include <numeric>
using namespace std;

int myop(int x, int y)
{
    return x + y + 1;
}

int main()
{
    int val[] = {1, 2, 3, 4, 5};
    int result[5];
    partial_sum(val, val + 5, result);
    for (int i = 0; i < 5; i++)
        cout << result[i] << ' ';
    return 0;
}