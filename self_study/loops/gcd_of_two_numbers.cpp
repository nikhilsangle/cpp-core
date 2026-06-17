/*
Write a C++ program to find the Greatest Common Divisor (GCD)
of two numbers entered by the user.
*/

#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    int gcd = 0;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    for(int i=1; i<=num1 && i<= num2; i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    cout<<"The greatest common divisor of number "<<num1<<" & "<<num2<<" is: "<<gcd;
    return 0;
}