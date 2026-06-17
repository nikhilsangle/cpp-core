/*
Write a C++ program to check whether a given
integer is a prime number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    bool isPrime = true;
    cout<<"Enter number: ";
    cin>>number;
    if(number ==1){
        cout<<"Number "<<number<<" is not a prime number.";
        return 0;
    }
    for(int i=2; i<number; i++){
        if(number % i == 0){
            isPrime = false;
           
        }
    }
    if(isPrime){
        cout<<"Number "<<number<<" is a prime number.";
    }else{
        cout<<"Number "<<number<<" is not a prime number.";
    }
    return 0;
}