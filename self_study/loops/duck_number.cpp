/*
Write a C++ program to check whether a number
is a Duck Number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit;
    int count = 0;
    cout<<"Enter number: ";
    cin>>number;

    int temp_num = number;
    while(number !=0){
        digit = number % 10;
        if(digit == 0){
            count++;
        }
        number = number / 10;
    }
    if(count > 0){
        cout<<"Number "<<temp_num<<" is a duck number.";
    }else{
        cout<<"Number "<<temp_num<<" is not a duck number.";
    }
    return 0;
}