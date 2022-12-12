// CE do tên template đặt trùng từ khóa => lỗi mơ hồ (câu A)
#include <iostream>
using namespace std;

template <typename T>
T max(T var_x, T var_y)
{
    return (var_x > var_y) ? var_x : var_y;
}
int main()
{
    cout << max(3, 7) << max(3.0, 7.0) << max(3, 7.0);
    return 0;
}