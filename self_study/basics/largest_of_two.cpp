/*
Write a C++ program to find the largest of two numbers.

Accept two numbers from the user and display the larger number.
*/

#include<iostream>
using namespace std;

int main(){
    double first_num, second_num ;

    cout<<"Enter first number: ";
    cin>>first_num;
    cout<<"Enter second number: ";
    cin>>second_num;

    if(first_num > second_num){
        cout<<first_num<<" is largest number.";
    }else if(second_num > first_num){
        cout<<second_num<<" is largest number.";
    }else{
        cout<<"Both are equal numbers";
    }
        
    return 0;
}