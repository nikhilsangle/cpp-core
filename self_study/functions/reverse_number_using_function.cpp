/*
Write a C++ program to create a function
that accepts a number as argument and
returns its reverse.
*/

#include <iostream>
using namespace std;

int reverseNumber(int num);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Reverse of number " << number << " is: " << reverseNumber(number);
    return 0;
}

int reverseNumber(int num)
{
    int digit, reverse = 0;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    return reverse;
}
