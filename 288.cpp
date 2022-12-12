#include <iostream>
using namespace std;
class country{
    private: int pp;
    public:
        void set(int ppp){
            this->pp=ppp;
        }
        int get(){
            return this->pp;
        }
};
class usa:private country{};
int main(){
    usa obj;
    obj.set(100);
    cout<<obj.get();
    return 0;
}