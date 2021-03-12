#include<iostream>
using namespace std;
int main()
{
    long n, k[100000], dem;
    string s[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        k[i] = s[i].length();
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (k[i] % 2 == 0) i++;
        for (int j = i + 1; j < n; j++)
        {
            if (k[i] == k[j]){
                dem = 0;
                for (int m = 0; m < k[i]; m++)
                {
                    if (s[i][m] != s[j][k[i] - m - 1]) {
                            dem = 1; break;
                    }
                }
                if (dem == 0) {
                        cout << k[i] << ' ' << s[i][(k[i] - 1) / 2]; break;
                }
            }
        }
    }
    return 0;
}
