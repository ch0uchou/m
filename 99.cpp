//IT
#include <iostream>
#include <string>
using namespace std;
void Func(char *ptr){
    cout << ptr;
}
int main(){
    const char *ptr = "IT";
    Func(const_cast<char *>(ptr));
    return 0;
}