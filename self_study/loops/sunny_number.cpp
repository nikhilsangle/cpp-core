/*
Write a C++ program to check whether a number
is a Sunny Number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number,new_num,perfect_square;
    cout<<"Enter number: ";
    cin>>number;

    new_num = number + 1;

    for(int i=1; i<=new_num; i++){
        perfect_square = i * i;
        if(perfect_square == new_num){
            break;
        }
    }
    if(perfect_square == new_num){
        cout<<"Number "<<number<<" is a sunny number.";
    }else{
        cout<<"Number "<<number<<" is not a sunny number.";
    }
    return 0;
}