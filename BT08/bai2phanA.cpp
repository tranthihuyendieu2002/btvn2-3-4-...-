#include<iostream>
using namespace std;
int main( )
{
    //câu a:
    {
        char a[4] = "abc";
        for (char *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
        }
    }
    //0x61fe0c : a
    //0x61fe0d : b
    //0x61fe0e : c
    //câu b:
    {
        int a[4] = {1, 2, 3};
        for (int *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
        }
    }
    //0x61fe00 : 1
    //0x61fe04 : 2
    //0x61fe08 : 3
    //câu c:
    {
        double a[4] = {1, 2, 3};
        for (double *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
        }
    }
    //0x61fdf0 : 1
    //0x61fdf8 : 2
    //0x61fe00 : 3
    //câu d:
    {
        double a[4] = {1, 2, 3};
        for (double *cp = a; (*cp) != '\0'; cp+=2) {
        cout << (void*) cp << " : " << (*cp) << endl;
        }
    }
    //0x61fdf0 : 1
    //0x61fe00 : 3
    //0x61fe10 : 3.95253e-323
    //0x61fe20 : 8.45383e-317
    return 0;
}
