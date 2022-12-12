#include <iostream> 
using namespace std; 
void Func(int var_x)
{
try{
if (var_x>0)
throw var_x;
else
throw 'e';
}

catch (int var_x){
cout << "integer" << var_x;
}
catch (char var_x){
cout << "character=" << var_x;
}
}
int main()
{
Func(10);
Func(0);
return 0;
}