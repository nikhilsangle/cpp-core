/*
Write a C++ program to create a function
that accepts two numbers by reference
and swaps their values.
*/

#include <iostream>
using namespace std;

void swapNumbersByReference(int &num1, int &num2);
int main()
{

    int number1, number2;
    cout << "Enter number 1: ";
    cin >> number1;

    cout << "Enter number 2: ";
    cin >> number2;

    cout << "\nBefore Swap: " << endl;
    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
    swapNumbersByReference(number1, number2);

    cout << "\nBack in Main:\n";
    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
    return 0;
}

void swapNumbersByReference(int &num1, int &num2)
{

    int temp_num = num1;
    num1 = num2;
    num2 = temp_num;

    cout << "\nAfter Swap: " << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
}
