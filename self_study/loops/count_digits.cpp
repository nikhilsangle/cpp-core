/*
Write a C++ program to count the number of digits
in a number entered by the user.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit, count = 0;
    cout<<"Enter number: ";
    cin>>number;

    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        count++;
    }
    cout<<"Number of digit: "<<count;
    return 0;
}