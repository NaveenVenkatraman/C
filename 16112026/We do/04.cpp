/*
Find the area of a triangle
Problem Statement: A student is cutting a triangular card. Read its 
positive base and perpendicular height in centimetres. Return its area in 
square centimetres and display it in main.
Function to use: double triangleArea(double base, double 
height);
Test Cases:
Input 1: 7 and 3
Output 1: 10.5
*/

#include <iostream>
using namespace std;

double triangleArea(double base, double height){
    return base*height/2;
}

int main(){
    int base,height;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the height : ";
    cin>>height;
    cout<<triangleArea(base,height);
    return 0;
}