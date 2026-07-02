/*
Write a C++ program to create a function
that accepts a number by reference
and doubles its value.
*/

#include <iostream>
using namespace std;

void doubleNumByReference(int &num);
int main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    cout << "\nBefore Doubling:" << endl;

    cout << "Number: " << number << endl;
    doubleNumByReference(number);
    cout << "\nAfter Doubling (Back in main):" << endl;
    cout << "Number: " << number << endl;
    return 0;
}

void doubleNumByReference(int &num)
{
    num *= 2;
}
