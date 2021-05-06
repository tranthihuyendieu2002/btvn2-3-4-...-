#include<iostream>
using namespace std;
class Fraction
{
    public:
    int numerator;
    int denominator;
    void print();
    Fraction (double a, double b);
    Fraction add(const Fraction& other) const;
    Fraction subtraction(const Fraction& other) const;
    Fraction multiplication(const Fraction& other) const;
    Fraction division(const Fraction& other) const;
    void reduce();
};
