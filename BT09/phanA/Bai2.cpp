#include<iostream>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;// sai ở dòng này, giá trị của p2 trước được trỏ vào địa chỉ của p
    //nhưng p lại bị xóa mất, nên p2 không chỉ vào đâu
    cout << *p2;
    delete p2;
    return 0;
}
