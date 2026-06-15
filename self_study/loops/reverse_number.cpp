/*
Write a C++ program to take an integer as input from the user
and print the reverse of that number.
*/

#include<iostream>
using namespace std;

int main(){
    int number,digit, reverse = 0;
    cout<<"Enter number: ";
    cin>>number;

    while(number !=0){
        digit = number % 10;
        reverse = digit + reverse *10; //5
        number = number / 10;
    }
    cout<<"Reverse is: "<<reverse;
    return 0;
}