#include<iostream>
using namespace std;

string concat(const char* day1, const char*day2)
{
    string k1 = day1, k2 = day2;
    return k1 + k2;
}
int main()
{
    char day1[] = "Hello", day2[] = "World";
    cout << concat(day1, day2);
    return 0;
}
