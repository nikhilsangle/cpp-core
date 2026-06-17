/*
Write a C++ program to check whether a given
number is a Strong Number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number, digit, sum = 0;
    cout<<"Enter number: ";
    cin>>number;
    int temp = number;
    while (number != 0){
        digit = number % 10;
        int fact = 1;
        for(int i=1; i<=digit; i++){
            fact = fact *i;
        }
        number = number / 10;
        sum = sum + fact;
    }
    if(sum == temp){
        cout<<"Number "<<temp<<" is a Strong number.";
    }else{
        cout<<"Number "<<temp<<" is not a Strong number.";
    }
    return 0;
}