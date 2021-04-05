#include<iostream>
using namespace std;
int count_even(int* nnnn, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (nnnn[i] % 2 == 0) dem++;
    return dem;
}
int main()
{
    int mang[100], n, mang2[5];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mang[i];
    }
    cout << count_even(mang, n) << endl;
    //trường hợp 5 phần tử đầu:
    cout << count_even(mang, 5) << endl;
    //trường hợp 5 phần tử cuối:
    for (int i = n - 1; i >= n - 5; i--)
    {
        mang2[n - i - 1] = mang[i];
    }
    cout << count_even(mang2, 5) << endl;
}
