/*
Write a C++ program to count the number of even digits
present in a given integer.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    int digit, count = 0;
    cout<<"Enter number: ";
    cin>>number;

    while(number != 0){
        digit = number % 10;
        if(digit % 2 == 0){
            count++;
        }
        number = number / 10;
    }
    cout<<"The number of even digits: "<<count;
    return 0;
}