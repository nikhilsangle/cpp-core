/*
Write a C++ program to check whether a given number is
positive, negative, or zero.
Accept an integer from the user and display the result.
*/

#include<iostream>
using namespace std;

int main(){
    double number;
    cout<<"Enter number: ";
    cin>>number;

    if(number > 0){
        cout<<"Number "<<number<<" is positive number";
    }else if(number < 0){
        cout<<"Number "<<number<<" is negative number.";
    }else{
        cout<<"Number is zero.";
    }
    return 0;
}