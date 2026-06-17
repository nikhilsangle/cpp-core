/*
Write a C++ program to check whether a given
number is a Perfect Number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number, sum = 0;
    cout<<"Enter number: ";
    cin>>number;

    for(int i=1; i<number; i++){
        if(number % i == 0){
            sum = sum + i;
        }
    }
    if(sum == number){
        cout<<"Number "<<number<<" is perfect number.";
    }else{
        cout<<"Number "<<number<<" is not a perfect number.";
    }
    return 0;
}