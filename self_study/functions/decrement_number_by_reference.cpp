/*
Write a C++ program to create a function
that accepts a number by reference
and decrements it by 1.
*/

#include <iostream>
using namespace std;

void decrementNumByReference(int &num)
{
    num--;
}
int main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    cout << "\nBefore Decrement: " << endl;
    cout << "Number: " << number << endl;
    decrementNumByReference(number);

    cout << "\nAfter Decrement(Back in main):" << endl;
    cout << "Number: " << number << endl;
    return 0;
}
