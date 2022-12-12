// 03
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(3, 0);
    vector<int> b(5, 0);

    b = a;
    a = vector<int>();
    cout << int(a.size()) << int(b.size()) << endl;
}