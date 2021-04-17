#include<iostream>
using namespace std;
bool is_palindrome(char a[])
{
    char *b = new char;
    string s = a;
    int n = s.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (*(a + i) != *(a + n - i - 1)) return false;
    }
    return true;
}
int main()
{
    char *a = new char;
    cin >> a;
    cout << is_palindrome(a);
    delete a;
    return 0;
}
