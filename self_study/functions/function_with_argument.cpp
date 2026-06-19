/*
Write a C++ program to create a function
with arguments that prints the square
of a number.
*/

#include<iostream>
using namespace std;

int printSquare(int num){
    return num * num;
}
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"Square of number "<<number<<" is: "<<printSquare(number);
    return 0;
}