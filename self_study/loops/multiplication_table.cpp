/*
Write a C++ program to display the multiplication table
of a number entered by the user.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    int ans = 1;
    cout<<"Enter a number: ";
    cin>>number;

    for(int i=1; i<=10; i++){
        ans = number * i;
        cout<<number<<" x "<<i<<" = "<<ans<<endl;
    }
    return 0;
}