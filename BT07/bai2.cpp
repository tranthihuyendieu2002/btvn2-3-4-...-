#include<iostream>
using namespace std;
void hamf(int k[])
{
    cout << sizeof(k) << endl;
}
int main()
{
    int mang[10];
    hamf(mang);
    cout << sizeof(mang);
    return 0;
}
//kích thước của k là 8 bit
//kích thước của mang là 40 bit
