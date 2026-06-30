/*
Write a C++ program to create a function
that accepts a number as argument and
returns whether it is an Armstrong Number or not.
*/

#include <iostream>
using namespace std;

int checkArmstrongNum(int num);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (checkArmstrongNum(number) == number)
    {
        cout << "The number " << number << " is an armstrong number.";
    }
    else
    {
        cout << "The number " << number << " is not an armstrong number.";
    }
    return 0;
}

int checkArmstrongNum(int num)
{
    int digit, count = 0, result = 0;
    int temp_num = num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    while (temp_num != 0)
    {
        digit = temp_num % 10;
        temp_num = temp_num / 10;
        int power = 1;
        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }
        result = result + power;
    }
    return result;
}

