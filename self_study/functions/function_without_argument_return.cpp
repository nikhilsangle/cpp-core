/*
Write a C++ program to create a function
without arguments and with return value
that returns the square of a number.
*/

#include<iostream>
using namespace std;

int displaySquare();

int main(){
    cout<<"Square: "<<displaySquare();
    return 0;
}

int displaySquare(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    return num * num;
}