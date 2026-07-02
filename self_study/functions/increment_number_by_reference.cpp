/*
Write a C++ program to create a function
that accepts a number by reference
and increments it by 1.
*/

#include <iostream>
using namespace std;

void incrementNumByReference(int &num)
{
    num++;
}
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "\nBefore Increment: " << endl;
    cout << "Number: " << number << endl;

    incrementNumByReference(number);
    cout << "\nAfter Increment(Back In Main): " << number << endl;
    return 0;
}
