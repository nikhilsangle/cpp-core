/*
Write a C++ program to check whether a given number is even or odd.
Accept an integer from the user and display whether the number
is even or odd.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;

    if(number % 2 == 0){
        cout<<"Number "<<number <<" is even number.";
    }else{
        cout<<"Number "<<number<<" is odd number.";
    }
    return 0;
}