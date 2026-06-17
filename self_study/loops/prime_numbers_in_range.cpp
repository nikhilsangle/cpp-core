/*
Write a C++ program to print all prime numbers
between two numbers entered by the user.
*/

#include<iostream>
using namespace std;

int main(){
    int start, end;
   
    cout<<"Enter range: ";
    cin>>start;
    cin>>end;
    
    
    cout<<"Prime numbers between "<<start<<"-"<<end<<" : "<<endl;
    for(int i=start; i<=end; i++){
        if(i<2){
            continue;
        }
        int count = 0;
        for(int j=2; j<i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}