/*
Write a C++ program to create a function
that accepts two numbers as arguments
and returns the largest number.
*/

#include<iostream>
using namespace std;

int findLargestNum(int a, int b);

int main(){
    int num1, num2;
    cout<<"Enter Number_1: ";
    cin>>num1;
    cout<<"Enter number_2: ";
    cin>>num2;
    cout<<"Largest number is: "<<findLargestNum(num1, num2);
    return 0;
}

int findLargestNum(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}