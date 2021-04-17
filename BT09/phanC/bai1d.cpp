#include<iostream>
using namespace std;
char *pad_right(const char a[], int n)
{
    char *b = new char;
    string s = a;
    int n1 = s.length();

    for (int i = 0; i < n1; i++) *(b + i) = *(a + i);
    if (n1 > n) return b;
    for (int i = n1; i < n; i++) *(b + i) = ' ';
    *(b + n) = '\0';
    return b;
}
int main()
{
    char *a = new char;
    int n;
    cin >> a >> n;
    a = pad_right(a, n);
    cout << a;
    delete a;
    return 0;
}

