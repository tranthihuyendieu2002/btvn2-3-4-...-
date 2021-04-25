#include<iostream>
#include<cstring>
using namespace std;
struct String
{
    int n;
    char *str;
    String (const char* s)
    {
        n = strlen(s);
        str = new char [n];
        strcpy(str, s);
    }
    ~String()
    {
        delete [] str;
    }
    void Print()
    {
        cout << str << endl;
    }
    void append(const char* s)
    {
        int n1 = n + strlen(s);
        char *k = new char[n1];
        strcpy(k, str);
        strcat(k, s);
        str = k;
        *(str + n1) = '\0';
        delete k;
    }
};

int main()
{
    String s("Hello");
    s.Print();
    String greeting("Hi");
    greeting.append(" there");
    greeting.Print();
    return 0;
}
