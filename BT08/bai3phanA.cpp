//sai do con trỏ x, y ở hàm swap_pointers chỉ là bản sao của con trỏ thật, khi kết thúc hàm
//thì bản sao đã thay đổi biến mất, còn bản thật ở hàm main vẫn như cũ
//cách sửa: thêm & vào trước con trỏ ở khai báo ở hàm swap_pointers để dùng luôn con trỏ gốc
#include<iostream>
using namespace std;
void swap_pointers(char* &x, char* &y)
{
    char *tmp;
    tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    char a[] = "I should print second";
    char b[] = "I should print first";
    char *s1 = a;
    char *s2 = b;
    swap_pointers(s1,s2);
    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;
    return 0;
}
