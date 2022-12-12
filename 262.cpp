#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (char e)
        {
            cout << "Inner Catch" << endl;
        }
    }
    catch (int e)
    {
        cout << "Outer Catch" << endl;
    }
    return 0;
}