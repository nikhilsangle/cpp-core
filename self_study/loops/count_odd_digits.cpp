/*
Write a C++ program to count the number of odd digits
present in a given integer.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit, count = 0;
    cout<<"Enter number: ";
    cin>>number;

    while(number != 0){
        digit = number % 10;
        if(digit % 2 != 0){
            count++;
        }
        number = number / 10;
    }
    cout<<"The number of odd digits: "<<count;
    return 0;
}