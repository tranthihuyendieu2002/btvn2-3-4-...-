#include<iostream>
using namespace std;
void truyen_gia_tri(int a)
{
    cout << "a = " << a << " at " << &a << endl;
}
void truyen_tham_chieu(int &a)
{
    cout << "a = " << a << " at " << &a << endl;
}
int main()
{
    int n;
    cin >> n;
    truyen_gia_tri(n);
    truyen_tham_chieu(n);
    cout << "n = " << n << " at " << &n << endl;
}
//truyền giá trị: a = 3 at 0x61fde0
//truyền tham chiếu: a = 3 at 0x61fe0c
//vị trí của n = 3 at 0x61fe0c
//=> vị trí của tham chiếu và đối số là giống nhau, vị trí của đối số và tham trị là khác nhau
