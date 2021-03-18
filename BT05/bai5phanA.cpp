#include<iostream>
using namespace std;
int main()
{
    int a, b;
    int &s = a;
    cin >> a;
    cout << s << "at " << &s << endl;
    cout << a << "at " << &a << endl;
    //a. Biến tham chiếu và biến nó chiếu tới là 1 biết trong bộ nhớ
    int &k;
    cout << k << "at " << &k << endl;
    //b. Không thể khai báo một tham chiếu mà chưa chiếu ngay nó tới một biến thường
    int &s = b;
    //c.Không thể chiếu một tham chiếu tới một biến khác với đích ban đầu của nó
}
