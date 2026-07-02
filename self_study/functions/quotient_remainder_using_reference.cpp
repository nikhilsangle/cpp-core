/*
Write a C++ program to create a function
that accepts a dividend and a divisor,
and returns the quotient and remainder
using pass by reference.
*/

#include <iostream>
using namespace std;

void quotientRemainderByReference(int dvd, int div, int &q, int &r)
{
    q = dvd / div;
    r = dvd % div;
}

int main()
{
    int dividend, divisor, quotient, remainder;

    cout << "Enter Dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    quotientRemainderByReference(dividend, divisor, quotient, remainder);

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
