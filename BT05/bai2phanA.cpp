#include<iostream>
using namespace std;
int faction(int x)
{
    cout << "x = " << x << " at " << &x << endl;
    if (x == 1) return 1;
    return x * faction(x - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << faction(n);
}
//kích thước của 1 stack frame là 40 byte
