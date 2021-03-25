#include<iostream>
using namespace std;

void xuat(int n, char daymoi[])
{
    for (int i = 0; i < n; i++)
    {
        cout << daymoi[i];
    }
    cout << endl;
}
void thu(int h, int n, int danhdau[], string k, char daymoi[])
{
    for (int i = 0; i < n; i++)
    {
        if(danhdau[i] == 0)
        {
            daymoi[h] = k[i]; danhdau[i] = 1;
            if (h == n - 1) xuat(n, daymoi);
            else thu(h + 1, n, danhdau, k, daymoi);
            danhdau[i] = 0;
        }
    }
}
int main()
{
    int danhdau[1000] = {};
    char daymoi[1000];
    string k;
    cin >> k;
    int n = k.length();
    thu(0, n, danhdau, k, daymoi);
    return 0;
}
