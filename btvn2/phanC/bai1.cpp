#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    if (n < 2) cout << "no";
    else
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << "no";
                break;
            }
        }
        if (n % i != 0) cout << "yes";
    }
}
