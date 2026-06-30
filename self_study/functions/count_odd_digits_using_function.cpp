/*
Write a C++ program to create a function
that accepts a number as argument and
returns the count of odd digits.
*/

#include <iostream>
using namespace std;
int countOddDigits(int num);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Count of odd digits in " << number << " is: " << countOddDigits(number);
    return 0;
}

int countOddDigits(int num)
{
    int digit, count = 0;

    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            count++;
        }
        num = num / 10;
    }
    return count;
}
