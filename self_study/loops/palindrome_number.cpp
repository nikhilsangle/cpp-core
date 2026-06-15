/*
Write a C++ program to check whether a given integer
is a palindrome number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit, rev = 0;
    
    cout<<"Enter number: ";
    cin>>number;
    int temp = number;
    while(number != 0){
        digit = number % 10;
        rev = digit + rev * 10;
        number = number / 10;
    }
    if(rev == temp){
        cout<<"Number is palindrome number.";
    }else{
        cout<<"Number is not palindrome number.";
    }
    return 0;
}