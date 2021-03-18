#include<iostream>
using namespace std;
int main()
{
    int a[3] = {1, 2, 3};
    char b[3] = {'a', 'b', 'c'};
    cout << (void*)&a[0] << ' ' << (void*)&a[1] << ' ' << (void*)&a[2];
    cout << endl << (void*)&b[0] << ' ' << (void*)&b[1] << ' ' << (void*)&b[2];
}
//- Vị trí các phần tử trong a cách nhau 4 byte
//- Vị trí các phần tử trong b cách nhau 1 byte
