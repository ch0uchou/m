//Chon dap an dung dien vao dau #### de doan chuong trinh sau thuc thi duoc (chon nhieu dap an)
#include <iostream>
using namespace std;
class Base{
    int col, row;
    int **ptr;
    public:
        Base(int = 2, int = 3, int = 1);
};
Base::Base(int col, int row, int n): col(col), row(row){
    this->ptr = new int *[this->row];
    int *temp = new int[this->row * this->col];
    for (int i = 0; i < this->row; i++){
        ptr[i] = temp;
        temp += this->col;
    } 
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->col; j++)
           ###
}
int main(){
    Base obj;
    return 0;
}
//A. *(*this.ptr + i) +j) = n;
//B. this->ptr[i][j] = n;  xx
//C. *(*(this->ptr + i) + j) = n;  xx
//D. Another Answer
//E. this.ptr[i][j] = n;