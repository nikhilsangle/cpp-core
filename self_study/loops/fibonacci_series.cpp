/*
Write a C++ program to print the first N terms
of the Fibonacci series.
*/

#include<iostream>
using namespace std;

int main(){
    int number, num1 =0, num2 = 1, ans;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"First "<<number<<" terms of the Series: "<<endl;
    for(int i=1; i<=number; i++){
        ans = num1 + num2;
        cout<<num1<<endl; 
        num1 = num2;
        num2 = ans;  
    }
    return 0;
}