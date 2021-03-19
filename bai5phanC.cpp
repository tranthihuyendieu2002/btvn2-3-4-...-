#include<iostream>
#include<cmath>
using namespace std;
int nguyento(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (nguyento(i) == 1) cout << i << ' ';
    }
}
