/*
Write a C++ program to create a function
that accepts a number as argument and
returns whether it is a prime number or not.
*/

#include <iostream>
using namespace std;

bool checkPrime(int num);

int main()
{
    int number;
    cout << "Enter number: ";

    cin >> number;
    // Edge case: 0 and 1 are not prime numbers
    if (number < 2)
    {
        cout << "Number " << number << " is not a prime number.";
        return 0;
    }
    if (checkPrime(number))
    {
        cout << "Number " << number << " is a prime number.";
    }
    else
    {
        cout << "Number " << number << " is not a prime number.";
    }
    return 0;
}

bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

