#include<iostream>
using namespace std;
int main()
{
    char daytab1[2][12] = {
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 12; j++)
            cout << daytab1[i][j];
        cout << endl;
    }
    char daytab2[2][12] = {
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,29,31,30,31,30,31,31,30,31,30,31
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 12; j++)
            cout << daytab2[i][j];
        cout << endl;
    }
}
