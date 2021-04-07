#include<iostream>
using namespace std;
void nhapmang(int *happy, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> *(happy + i);
    }
}
int main()
{
    int *happy = new int [100];
    int n, so_can_tim, danh_dau, cong;
    cin >> n;
    nhapmang(happy, n);
    cin >> so_can_tim;
    //n = n - 1;
    if (n % 2 == 0) danh_dau = n / 2;
    else danh_dau = (n + 1) / 2;
    cong = danh_dau;
    danh_dau = 0;
    while(true)
    {
        if (so_can_tim == *(happy + danh_dau))
        {
            break;
        }
        else if (so_can_tim < *(happy + danh_dau))
        {
            if (cong % 2 == 0) cong = cong / 2;
            else cong = (cong + 1) / 2;
            danh_dau = cong;
        }
        else if (so_can_tim > *(happy + danh_dau))
        {
            if (cong % 2 == 0) cong = cong / 2;
            else cong = (cong + 1) / 2;
            danh_dau += cong;
        }
    }
    cout << danh_dau + 1;
}
