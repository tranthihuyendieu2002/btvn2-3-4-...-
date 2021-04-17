#include<iostream>
using namespace std;
char *trim_right(const char a[])
{
    char *b = new char;
    string s = a;
    int n = s.length(), k = n;

    while (*(a + k - 1) == ' ') k--;
    for (int i = 0; i < k; i++) *(b + i) = *(a + i);
    *(b + k) = '\0';
    return b;
}
int main()
{
    char *a = new char;
    cin >> a;
    a = trim_right(a);
    cout << a;
    delete a;
    return 0;
}

