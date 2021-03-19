#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    srand(time(0));
    cout << rand() % n;
}
