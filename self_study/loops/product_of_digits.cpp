/*
Write a C++ program to calculate the product
of all digits of a given integer.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit, product = 1;
    cout<<"Enter number: ";
    cin>>number;

    while (number != 0){
        digit = number % 10;
        product = digit * product;
        number = number / 10;
    }
    cout<<"The product of all digits: "<<product;

    return 0;
}