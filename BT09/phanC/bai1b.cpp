#include<iostream>
using namespace std;
char *delete_char(const char a[], char c)
{
    char *b = new char;
    string s = a;
    int n = s.length(), k = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) != c){
            *(b + k) = *(a + i); k++;
        }
    }
    *(b + k) = '\0';
    return b;
}
int main()
{
    char *a = new char;
    char c;
    cin >> a >> c;
    a = delete_char(a, c);
    cout << a;
    delete a;
    return 0;
}

