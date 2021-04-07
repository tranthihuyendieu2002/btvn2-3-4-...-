#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[] = "abc", bff[] = "abc";
    string str2 = "abcdabcjkjksabc";
    int hhhh = 0;
    for (int i = 0; i < str2.length() - 2; i++)
    {
        char dem[4];
        dem[0] = char(str2[i]);
        dem[1] = char(str2[i + 1]);
        dem[2] = char(str2[i + 2]);
        if (strcmp(dem, str1) == 0) hhhh++;
    }
    cout << hhhh;
    return 0;
}
