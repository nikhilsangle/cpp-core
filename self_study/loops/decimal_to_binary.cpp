/*
Write a C++ program to convert a decimal
number into binary.
*/

#include<iostream>
using namespace std;

int main(){
    int number, remainder;
    string binary = "";

    cout<<"Number: ";
    cin>>number;
    
    int decimal = number;
    if(number == 0){
        cout<<"0";
        return 0;
    }
    while(number !=0){
        remainder = number % 2;
        binary = to_string(remainder) + binary;
        number = number / 2;   
    }
    cout<<"Binary of decimal number "<<decimal<<" is: "<<binary;
    return 0;
}