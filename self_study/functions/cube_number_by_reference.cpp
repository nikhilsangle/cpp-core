/*
Write a C++ program to create a function
that accepts a number by reference
and replaces it with its cube.
*/

#include <iostream>
using namespace std;
void cubeByReference(int &num)
{
    num = num * num * num;
}
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "\nBefore Cube:" << endl;
    cout << "Number: " << number << endl;

    cubeByReference(number);

    cout << "\nAfter Cube (Back in main)" << endl;
    cout << "Number: " << number << endl;
    return 0;
}
