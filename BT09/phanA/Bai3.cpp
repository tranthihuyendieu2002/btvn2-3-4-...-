#include<iostream>
using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;//sai ở dòng này vì địa chỉ của c ở sau địa chỉ của a 3 bit
    //mà a lại dài 9 bit nên giá trị của c trùng với 6 bit cuối của a
    //nên khi xóa c giá trị của a bị mất và bị lỗi
    cerr << "a after deleting c:" << "-" << a << "-" << endl;//lệnh cerr này chạy không như mong muốn
    delete a;
    return 0;
}
