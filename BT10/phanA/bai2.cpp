#include<iostream>
using namespace std;
struct Point
{
    double x;
    double y;
    void nhap()
    {
        cin >> x >> y;
    }
    void print() {
    cout << &(x) << "," << &(y) << endl;
}
};
void print1(Point a) {
    cout << &(a.x) << "," << &(a.y) << endl;
}
void print2(Point &a) {
    cout << &(a.x) << "," << &(a.y) << endl;
}
int main()
{
    Point a;
    a.nhap();
    a.print();
    print1(a);
    print2(a);
    return 0;
}
