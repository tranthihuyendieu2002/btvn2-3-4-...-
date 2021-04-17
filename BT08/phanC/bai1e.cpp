#include<iostream>
using namespace std;
char *truncate(char a[], int n)
{
    char *b = new char;
    string s = a;
    int n1 = s.length();

    if (n1 < n) n = n1;
    for (int i = 0; i < n; i++) *(b + i) = *(a + i);

    *(b + n) = '\0';
    return b;
}
int main()
{
    char *a = new char;
    int n;
    cin >> a >> n;
    a = truncate(a, n);
    cout << a;
    delete a;
    return 0;
}
