/*
Write a C++ program to calculate Simple Interest.
Accept Principal Amount (P),
Rate of Interest (R),
and Time Period (T) from the user.
Use the formula:
Simple Interest = (P × R × T) / 100
Display the calculated Simple Interest.
*/

#include<iostream>
using namespace std;

int main(){
    double p, r, t;
    double SI;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter time period in year: ";
    cin>>t;
    SI = (p * r * t) / 100;
    cout<<"Simple Interest is: "<<SI;
    return 0;
}