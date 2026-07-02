/*
Write a C++ program to create a function
that accepts three numbers as arguments
and returns the largest number.
*/

#include <iostream>
using namespace std;

int findLargestNum(int num1, int num2, int num3);

int main()
{
    int number1, number2, number3;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Enter number 3: ";
    cin >> number3;
    cout << "Largest number is: " << findLargestNum(number1, number2, number3);
    return 0;
}

int findLargestNum(int num1, int num2, int num3)
{
    if (num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}
