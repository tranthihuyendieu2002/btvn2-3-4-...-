#include<iostream>
#include"fraction.cpp"
using namespace std;
int main()
{
    Fraction a(-1, -2), b(-3, 1), c(0, 0);
    a.reduce();
    a.print();
    c = a.add(b);
    c.reduce();
    c.print();
    c = a.subtraction(b);
    c.reduce();
    c.print();
    c = a.multiplication(b);
    c.reduce();
    c.print();
    c = a.division(b);
    c.reduce();
    c.print();
    return 0;
}
