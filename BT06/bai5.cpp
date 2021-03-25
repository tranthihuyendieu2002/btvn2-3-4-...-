#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f0 = 1, f1 = 0, f = 1;
    for (int i = 1; i < n; i++)
    {
        f0 = f1 + f;
        f1 = f;
        f = f0;
    }
    cout << f0 << ' ';
    return 0;
}

