/*
Write a C++ program to find the Least Common Multiple (LCM)
of two numbers entered by the user.
*/

#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    int lcm = 0;

    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    
    for(int i=1; i<=(num1*num2); i++){
        lcm = num1 * i;
        if(lcm % num2 == 0){
            break;
        }
    }
    cout<<"Least common multiple of number ("<<num1<<","<<num2<<") is: "<<lcm;
    return 0;
}