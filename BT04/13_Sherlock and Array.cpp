#include<iostream>
using namespace std;
int main()
{
    long n, dem, danhdau = 0;
    long mang[100000], s[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        danhdau = 0;
        cin >> dem >> mang[0];
        s[0] = mang[0];
        for (int j = 1; j < dem; j++)
        {
            cin >> mang[j];
            s[j] = mang[j] + s[j - 1];
        }
        for (int j = 0; j < dem; j++)
        {
            if (s[dem - 1] == s[j] * 2 - mang[j]){
                danhdau = 1; cout << "YES" << endl;
            }
        }
        if (danhdau == 0) cout << "NO" << endl;
    }
    return 0;
}
