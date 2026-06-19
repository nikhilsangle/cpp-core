/*
Write a C++ program to check whether a number
is a Spy Number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit;
    int sum = 0;
    int product = 1;
    cout<<"Enter number: ";
    cin>>number;
    int temp_num = number;
    if(number == 0){
        cout<<"Number "<<number<<" is a spy number.";
        return 0;
    }
    while(number != 0){
        digit = number % 10;
        sum = sum + digit;
        product = product * digit;
        number = number / 10;
    }
    if(sum == product){
        cout<<"Number "<<temp_num<<" is a spy number.";
    }else{
        cout<<"Number "<<temp_num<<" is not a spy number.";
    }
    return 0;
}