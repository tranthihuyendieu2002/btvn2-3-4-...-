#include<iostream>
using namespace std;
char *reverse(const char a[])
{
    char *b = new char;
    string s = a;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        *(b + i) = *(a + n - i - 1);
    }
    *(b + n) = '\0';
    return b;
}
int main()
{
    char *a = new char;
    cin >> a;
    a = reverse(a);
    cout << a;
    delete a;
    return 0;
}
