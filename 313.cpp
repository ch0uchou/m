#include <iostream> 
using namespace std; 
void Func(int var_x){
int var_y  = 1; 
while (true){
if (var_y >= var_x) throw var_y;
cout << var_y;
var_y++;
}

}
int main(){
try{
    Func(2); 
    
}
catch (int e){
    cout << "exception:" << e;
}
return 0;
}