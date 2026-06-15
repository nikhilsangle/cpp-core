/*
Write a C++ program to calculate and display
the sum of all even numbers from 1 to 20
using a for loop.
*/

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i=2; i<=20; i+=2){
        sum+=i;
    }
    cout<<"Sum of all even numbers from 1 to 20 is: "<<sum;
    return 0;
}