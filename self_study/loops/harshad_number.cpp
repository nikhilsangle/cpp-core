/*
Write a C++ program to check whether a number is a Harshad Number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit;
    int sum = 0;
    cout<<"Enter number: ";
    cin>>number;
    int temp_num = number;
    if(number == 0){
        cout<<"The number "<<number<<" is not a Harshad number.";
        return 0;
    }
    while(number !=0){
        digit = number % 10;
        sum = sum+ digit;
        number = number / 10;
    }
    if(temp_num % sum == 0){
        cout<<"The number "<<temp_num<<" is a harshad number.";
    }else{
        cout<<"The number "<<temp_num<<" is not a harshad number.";
    }
    return 0;
}