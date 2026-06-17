/*
Write a C++ program to calculate the power of a number.

Take base and exponent as input from the user
and print the result.
*/

#include<iostream>
using namespace std;

int main(){

    int base, exponent, result = 1;
    cout<<"Enter base number: ";
    cin>>base;
    cout<<"Enter exponent number: ";
    cin>>exponent;

    for(int i=1; i<=exponent; i++){
        result = result * base;
    }
    cout<<result;
    return 0;
}