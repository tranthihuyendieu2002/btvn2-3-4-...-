#include<iostream>
using namespace std;
void truyen_mang(int a[])
{
    cout << "a[0] = " << a[0] << " at " << &a[0] << endl;
}
void truyen_string(string a)
{
    cout << "a = " << a << " at " << &a << endl;
}
int main()
{
    int n[1];
    string a;
    cin >> n[0] >> a;
    truyen_mang(n);
    truyen_string(a);
    cout << "n[0] = " << n[0] << " at " << &n[0] << endl;
    cout << "a = " << a << " at " << &a << endl;
}
/*a[0] = 1 at 0x62fe1c
a = g at 0x62fdd0
n[0] = 1 at 0x62fe1c
a = g at 0x62fdf0
=> cả mảng lần string đều được truyền theo cơ chế tham chiếu
*/
