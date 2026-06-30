/*
Write a C++ program to create a function
that accepts a number as argument and
returns whether it is a Perfect Number or not.
*/

#include <iostream>
using namespace std;

bool checkPerfectNum(int num);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (number <= 0)
    {
        cout << "Number " << number << " is not a perfect number.";
        return 0;
    }
    if (checkPerfectNum(number))
    {
        cout << "Number " << number << " is a perfect number.";
    }
    else
    {
        cout << "Number " << number << " is not a perfect number.";
    }
    return 0;
}

bool checkPerfectNum(int num)
{
    int sum = 0, num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum == num;
}
