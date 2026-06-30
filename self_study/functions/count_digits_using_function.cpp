/*
Write a C++ program to create a function
that accepts a number as argument and
returns the number of digits.
*/

#include <iostream>
using namespace std;

int countDigits(int num);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Number of digits: " << countDigits(number);
    return 0;
}

int countDigits(int num)
{
    int count = 0;
    if (num == 0)
    {
        return 1;
    }
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}
