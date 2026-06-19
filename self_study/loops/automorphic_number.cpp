/*
Write a C++ program to check whether a number is an Automorphic Number or not.
*/

#include<iostream>
using namespace std;

int main(){
    int number, square;
    int count = 0, result = 1;
    int automorphic;
    cout<<"Enter number: ";
    cin>>number;
    
    int temp_num = number;
    square = number * number;
    while(number !=0){
        number = number /10;
        count++;
    }
    if(temp_num == 0){
        count = 1;
    }
    for(int i=1; i<=count; i++){
        result = result *10;
    }
    automorphic = square % result;
    if(automorphic == temp_num){
        cout<<"The number "<<temp_num<<" is an automorphic number.";
    }else{
        cout<<"The number "<<temp_num<<" is not an automorphic number.";
    }
    return 0;
}