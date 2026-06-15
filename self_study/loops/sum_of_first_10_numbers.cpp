/*
Write a C++ program to calculate and display
the sum of the first 10 natural numbers using a for loop.
*/

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i=1; i<=10; i++){
        sum +=i;
    }
    cout<<"Sum of the first 10 natural numbers is: "<<sum;
    return 0;
}