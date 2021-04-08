#include<iostream>
using namespace std;
void f(int xval)
{
    int x;
    x = xval;
// in địa chỉ của x tại đây
    cout << &x << endl;
//0x61fddc
}
void g(int yval)
{
    int y;
// in địa chỉ của y tại đây
    y = yval;
    cout << &y;
//0x61fdec
}
int main()
{
    f(7);
    g(11);
    return 0;
}
//địa chỉ cả 2 biến ở gần nhau do cả 2 có cùng kiểu trả về, cùng kiểu khai báo int
