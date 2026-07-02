/*
Write a C++ program to create a function
that accepts a number by reference
and replaces it with its square.
*/

#include <iostream>
using namespace std;

void squareOfNum(int &num)
{
    num *= num;
}
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "\nBefore Square: " << endl;
    cout << "Number: " << number << endl;

    squareOfNum(number);

    cout << "\nAfter Squaring (Back in Main): " << number << endl;
    return 0;
}
