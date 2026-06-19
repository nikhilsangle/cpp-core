/*
Write a C++ program to create a function
with arguments and no return value that
prints the square of a number.
*/

#include<iostream>
using namespace std;

void printSquare(int num);

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    printSquare(number);
    return 0;
}

void printSquare(int num){
    cout<<"Square of number "<<num<<" is: "<<num * num;
}