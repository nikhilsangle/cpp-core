/*
Write a C++ program to calculate the area of a circle.
Accept the radius from the user and calculate the area using the formula:
Area = π × radius × radius
Use π = 3.14
Display the calculated area.
*/

#include<iostream>
using namespace std;

int main(){
    const double pi = 3.14;
    double radius;
    double area;

    cout<<"Enter radius of circle: ";
    cin>>radius;
    area = pi * radius * radius;

    cout<<"Area of circle is: "<<area;
    return 0;
}