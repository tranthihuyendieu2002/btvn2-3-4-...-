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
    cout << &x << "," << &y << endl;
}
};

int main()
{
    Point a;
    a.nhap();
    a.print();
    return 0;
}
