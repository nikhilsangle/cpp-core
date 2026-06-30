/*
Write a C++ program to create a function
that accepts a number as argument and
returns the count of even digits.
*/

#include <iostream>
using namespace std;

int countEvenDigits(int num);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Count of even digits in " << number << " is: " << countEvenDigits(number);
    return 0;
}

int countEvenDigits(int num)
{
    int digit, count = 0;
    if (num == 0)
    {
        return 1;
    }
    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 == 0)
        {
            count++;
        }
        num = num / 10;
    }
    return count;
}
