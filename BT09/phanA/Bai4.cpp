#include<iostream>
using namespace std;

int concat(int *day1)
{
    int* day2 = new int;
    day1 = day2;
    delete day1;
    return *day2;
}
int main()
{
    int* day1 = new int;
    *day1 = 100;
    cout << concat(day1);
    return 0;
    delete day1;
}
//sau khi con trỏ trỏ vào biến địa phương, khi con trỏ bị xóa, biến địa phương cũng mất
//địa chỉ để chỉ vào, nên giá trị của biến địa phương là ngẫu nhiên

