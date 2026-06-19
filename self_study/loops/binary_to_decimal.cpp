/*
Write a C++ program to convert a binary
number into decimal.
*/

#include<iostream>
using namespace std;

int main(){
    int binary;
    int decimal_num = 0;
    int base = 1;
    int remainder =  0;
    
    cout<<"Enter number: ";
    cin>>binary;

    int temp_binary = binary;
    
    while(binary !=0){
        remainder = binary % 10;
        decimal_num = decimal_num + remainder * base;
        base = base * 2;
        binary = binary / 10;
    }
    cout<<"Decimal of binary number "<<temp_binary<<" is: "<<decimal_num;
    return 0;
}