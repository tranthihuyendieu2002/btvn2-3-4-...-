#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j <= n) cout << i + j << ' ';
            else cout << i + j - n << ' ';
        }
        cout << endl;
    }
}
