/*
Write a C++ program to take an integer as input from the user
and calculate the sum of its digits.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit;
    int sum = 0;
    cout<<"Enter number: ";
    cin>>number;

    while(number != 0){
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    cout<<"Sum of digit is: "<<sum;
    return 0;
}