/*
Write a C++ program to create a function
that accepts a number as argument and
returns whether it is a palindrome or not.
*/

#include<iostream>
using namespace std;

int checkPalindrome(int num);

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;

    if(number == checkPalindrome(number)){
        cout<<"Number "<<number<<" is a palindrome number.";
    }else{
        cout<<"Number "<<number<<" is not a palindrome number";
    }
    return 0;
}

int checkPalindrome(int num){
    int digit, reverse = 0;
    while(num !=0){
        digit = num % 10;
        reverse = reverse * 10 +digit;
        num = num / 10;
    }
    return reverse;
}