// KHOACNTTDUT
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string var_x("KHOA");
    string var_y("DUT");
    var_x += "CNTT";
    var_x += var_y;
    var_x += '\n';
    cout << var_x;
    return 0;
}