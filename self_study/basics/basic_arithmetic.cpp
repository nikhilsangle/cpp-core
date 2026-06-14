/*
Write a C++ program to input two integers from the user and perform
basic arithmetic operations: addition, subtraction, multiplication,
division, and modulus. Display the result of each operation.
*/

#include<iostream>
using namespace std;

int main(){
    int a, b;
    int add, sub, multi,division,mod;
    cout<<"Enter number a :";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    add = a + b;
    sub = a - b;
    multi = a * b;
    division = a / b;
    mod = a % b;

    cout<<"Addition of number "<<a<<" & "<<b<<" is: "<<add<<endl;
    cout<<"Subtraction of number "<<a<<" & "<<b<<" is: "<<sub<<endl;
    cout<<"Multiplication of number "<<a<<" & "<<b<<" is: "<<multi<<endl;
    cout<<"Division of number "<<a<<" & "<<b<<" is: "<<division<<endl;
    cout<<"Modulus of number "<<a<<" & "<<b<<" is: "<<mod<<endl;

    return 0;
}