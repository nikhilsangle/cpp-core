/*
Write a C++ program to create a function
that accepts a number as argument and
returns the product of its digits.
*/
#include <iostream>
using namespace std;
int productOfDigits(int num);
int main()
{

    int number;
    cout << "Enter number: ";
    cin >> number;
    if (number == 0)
    {
        cout << "Product of digits of the number " << number << " is 0 ";
        return 0;
    }
    cout << "Product of digits of the number " << number << " is " << productOfDigits(number);
    return 0;
}

int productOfDigits(int num)
{
    int digit, product = 1;

    while (num != 0)
    {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }
    return product;
}
