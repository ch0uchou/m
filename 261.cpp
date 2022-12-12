// Compile error
#include <iostream>
#include <exception>
using namespace std;

void FuncExp()
{
    cout << "Exception: ";
    throw;
}

void Func() throw(int, bad_exception)
{
    throw 'x';
}

int main(void)
{
    set_unexpected(FuncExp);
    try
    {
        Func();
    }
    catch (int)
    {
        cout << "int";
    }
    catch (bad_exception be)
    {
        cout << "bad_exception";
    }
    catch (...)
    {
        cout << "other exception";
    }
    return 0;
}