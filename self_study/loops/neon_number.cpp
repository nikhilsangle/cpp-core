/*
Write a C++ program to check whether a number
is a Neon Number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number, square, digit;
    int sum = 0;
    cout<<"Enter number: ";
    cin>>number;
    int temp_num = number;
    square = number * number;

    while(square !=0){
        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }
    if(temp_num == sum){
        cout<<"Number "<<temp_num<<" is a neon number.";
    }else{
        cout<<"Number "<<temp_num<<" is not a neon number.";
    }
    return 0;
}