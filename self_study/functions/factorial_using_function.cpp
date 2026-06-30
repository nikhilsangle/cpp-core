/*
Write a C++ program to create a function
that accepts a number as argument and
returns its factorial.
*/

#include<iostream>
using namespace std;

int factorial(int num);

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"factorial of "<<number<<" is: "<<factorial(number);
    return 0;
}

int factorial(int num){
    int fact = 1;
    for(int i= 1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}