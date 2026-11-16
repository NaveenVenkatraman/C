/*
Area of a triangle
Problem Statement: A craft club is making triangular flags. Read the 
positive base and perpendicular height in centimetres and display the 
returned area in square centimetres.
Function to use: double areaOfTriangle(double base, double 
height);
Test Cases:
Input 1: 9 and 5
Output 1: 22.5
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