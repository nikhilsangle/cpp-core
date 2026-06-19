/*
Write a C++ program to create a function
without arguments that prints the square
of a number.
*/

#include<iostream>
using namespace std;

void displaySquare();

int main(){
    displaySquare();
    return 0;
}

void displaySquare(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"Square of number "<<number<<" is: "<<number * number;
}