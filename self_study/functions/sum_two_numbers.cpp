/*
Write a C++ program to create a function
that accepts two numbers as arguments
and returns their sum.
*/

#include<iostream>
using namespace std;

int sum(int a, int b);

int main(){
    int num1, num2;
    cout<<"Enter number_1: ";
    cin>>num1;
    cout<<"Enter number_2: ";
    cin>>num2;

    cout<<"Sum of two numbers is: "<<sum(num1, num2);
    return 0;
}

int sum(int a, int b){
    return a + b;
}