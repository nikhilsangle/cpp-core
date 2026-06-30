/*
Write a C++ program to create a function
that accepts a number as argument and
returns whether it is a Strong Number or not.
*/

#include <iostream>
using namespace std;

int factorial(int num);
bool checkStrongNum(int num);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (checkStrongNum(number))
    {
        cout << "The number " << number << " is a strong number.";
    }
    else
    {
        cout << "The number " << number << " is not a strong number.";
    }

    return 0;
}

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

bool checkStrongNum(int num)
{
    int digit, digit_fact, result = 0;
    int temp_num = num;
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        digit_fact = factorial(digit);
        result = result + digit_fact;
    }
    if (result == temp_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
