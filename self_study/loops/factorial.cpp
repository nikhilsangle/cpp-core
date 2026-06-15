/*
Write a C++ program to calculate the factorial
of a number entered by the user using a for loop.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    int factorial = 1;
    cout<<"Enter number: ";
    cin>>number;

    for(int i=1; i<=number; i++){
        factorial *=i;
    }
    cout<<"Factorial of number "<<number<<" is: "<<factorial;
    return 0;
}