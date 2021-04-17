#include<iostream>
using namespace std;
char *trim_right(char a[])
{
    string s = a;
    int n = s.length(), k = n;

    while (*(a + k - 1) == ' ') k--;
    *(a + k) = '\0';
    return a;
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
