/*
Write a C++ program to check whether a given
3-digit integer is an Armstrong number or not.
*/

#include<iostream>
using namespace std;

int main(){

    int number;
    int digit;
    int digit_count = 0;
    cout<<"Enter number: ";
    cin>>number;
    int temp = number;

    while(number != 0){
        digit = number % 10;
        number = number / 10;
        digit_count++;
    }    
    number = temp;
    int sum = 0;
    while(number != 0){
        int power_result = 1;
        digit = number % 10;
        for(int i=1; i<=digit_count; i++){
            power_result = digit * power_result;
        }
        number = number / 10;
        sum = sum + power_result;   
    }
    if(temp == sum){
        cout<<"Number "<<temp<<" is an armstrong number.";
    }else{
        cout<<"Number "<<temp<<" is not an armstrong number.";
    }
    return 0;
}