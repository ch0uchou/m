// Compile error
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    char str_x[6] = "ITF";
    char str_y[6] = "DUT";
    char str_z[12] = str_x + " " + str_y;
    cout << str_z;
    return 0;
}