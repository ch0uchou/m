#include <iostream>
using namespace std;
int main()
{
int var_x = -1;

char *ptr;

ptr = new char[256]; 
try{

if (var_x < 0)

throw var_x;

if (ptr == NULL)

throw "ptr is NULL";
}
catch (...)
{
cout << "Exception occurred: exiting";
}
return 0;
}