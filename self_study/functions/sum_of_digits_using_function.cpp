/*
Write a C++ program to create a function
that accepts a number as argument and
returns the sum of its digits.
*/

#include <iostream>
using namespace std;

int sumOfDigits(int num);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Sum of digits of number " << number << " is " << sumOfDigits(number);
    return 0;
}

int sumOfDigits(int num)
{
    int digit, sum = 0;

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}
