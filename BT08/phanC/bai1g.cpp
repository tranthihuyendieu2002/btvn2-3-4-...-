#include<iostream>
using namespace std;
char *trim_left(char a[])
{
    char *b = new char;
    string s = a;
    int n = s.length(), k = 0;

    while (*(a + k) == ' ') k++;
    for (int i = k; i < n - k; i++) *(b + i) = *(a + i - k);
    *(b + n - k) = '\0';
    return b;
}
int main()
{
    char *a = new char;
    cin >> a;
    a = trim_left(a);
    cout << a;
    delete a;
    return 0;
}
