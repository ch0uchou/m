//32
#include <iostream>
using namespace std;
class Point{
    int x, y;
    public:
        Point();
        Point& operator()(int, int);
        friend ostream& operator << (ostream&, const Point&);
};
Point::Point(): x(0), y(0){

}
Point& Point::operator()(int x, int y){
    this->x = x;
    this->y = y;
    return *this;
}
ostream& operator<<(ostream& o, const Point& obj){
    o << obj.x << obj.y;
    return o;
}
int main(){
    Point obj;
    obj(3,2);
    cout << obj;
    return 0;
}