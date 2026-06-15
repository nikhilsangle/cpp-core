/*
Write a C++ program to find the largest of three numbers.

Accept three numbers from the user and display the largest number.
Handle cases where two or more numbers are equal.
*/

#include<iostream>
using namespace std;

int main(){
    double first_num;
    double second_num;
    double third_num;

    cout<<"Enter first number: ";
    cin>>first_num;
    cout<<"Enter second number: ";
    cin>>second_num;
    cout<<"Enter third number: ";
    cin>>third_num;

    if(first_num >= second_num && first_num >= third_num){
        if(first_num == second_num && second_num == third_num){
            cout<<"First, second, and third numbers are equal.";
        }else if(first_num == second_num){
            cout<<"First and second numbers are equal and largest.";
        }else if(first_num == third_num){
            cout<<"First and third numbers are equal and largest.";
        }else{
            cout<<"The first number is the largest number.";
        }
    }else if(second_num >= first_num && second_num >= third_num){
        if(second_num == first_num){
            cout<<"First and Second numbers are equal and largest.";
        }else if(second_num == third_num){
            cout<<"Second and third numbers are equal and largest.";
        }else{
            cout<<"The second number is the largest number.";
        }
    }else{
        cout<<"The third number is the largest number.";
    }

    return 0;
}