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
    void print()
    {
        cout << x << ' ' << y;
    }
};
Point mid_point(Point a, Point b) {
        Point sum;
        sum.x = (a.x + b.x)/2;
        sum.y = (a.y + b.y)/2;
        return sum;
    }
int main()
{
    Point a, b, c;
    a.nhap();
    b.nhap();
    c = mid_point(a, b);
    c.print();
    return 0;
}

