#include<iostream>
using namespace std;
int main()
{
    int n, a[1000], b[1000], k, danhdau[1000] = {-1};
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n; i < 2 * n + 1; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j < 2 * n + 1; j++)
        {
            if (a[i] == b[j] && danhdau[j] != 1 && danhdau[i] != 1)
            {
                danhdau[j] = 1; danhdau[i] = 1;
            }
        }
    }
    int s = 0;
    for (int i = n; i < 2 * n; i++)
    {
        if(danhdau[i] != 1) {
            cout << b[i]; break;
        }
    }
    return 0;
}

