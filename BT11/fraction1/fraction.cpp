#include<iostream>
#include"fraction.h"
using namespace std;
void Fraction::print()
{
    cout << numerator << '/' << denominator << endl;
}
Fraction::Fraction (double a, double b)
{
    numerator = a; denominator = b;
}
Fraction Fraction::add(const Fraction& other) const
{
    Fraction sum(0, 0);
    sum.numerator = numerator * other.denominator + other.numerator * denominator;
    sum.denominator = denominator * other.denominator;
    return sum;
}
Fraction Fraction::subtraction(const Fraction& other) const
{
    Fraction m(0, 0);
    m.numerator = numerator * other.denominator - other.numerator * denominator;
    m.denominator = denominator * other.denominator;
    return m;
}
Fraction Fraction::multiplication(const Fraction& other) const
{
    Fraction m(0, 0);
    m.numerator = numerator * other.numerator;
    m.denominator = denominator * other.denominator;
    return m;
}
Fraction Fraction::division(const Fraction& other) const
{
    Fraction m(0, 0);
    m.numerator = numerator * other.denominator;
    m.denominator = denominator * other.numerator;
    return m;
}
void Fraction::reduce()
{
    int a = numerator, b = denominator;
    if (a == 0 || b == 0) a = a + b;
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    while (a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
        }
    numerator /= a;
    denominator /= a;
    if (denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }
}
