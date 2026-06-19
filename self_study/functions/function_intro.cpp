/*
Write a C++ program to create and call
a simple function.
*/

#include<iostream>
using namespace std;

void greet(); //Function declaration

int main(){
    greet(); //function calling.
    return 0;
}

//Function definition
void greet(){
    cout<<"Hello from function.";
}