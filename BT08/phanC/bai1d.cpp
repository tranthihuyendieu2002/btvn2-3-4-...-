#include<iostream>
using namespace std;
char *pad_left(char a[], int n)
{
    char *b = new char;
    string s = a;
    int n1 = s.length(), k = 0;

    for (int i = 0; i < n - n1; i++) *(b + i) = ' ';
    if (n - n1 > 0) k = n - n1;
    for (int i = k; i < n1 + k; i++) *(b + i) = *(a + i - k);

    if (n < n1) *(b + n1) = '\0';
    else *(b + n) = '\0';
    return b;
}
int main()
{
    char *a = new char;
    int n;
    cin >> a >> n;
    a = pad_left(a, n);
    cout << a;
    delete a;
    return 0;
}
