/*
Calculate two frame perimeters
Problem Statement: A craft shop makes square and rectangular frames. 
Read three integers from 1 to 100 in this order: square side, rectangle 
length, rectangle width. Overload perimeter with one and two 
parameters. Print the square perimeter followed by the rectangle 
perimeter.
Function to use: int perimeter(int side);
int perimeter(int length, int width);
Test Cases:
Input 1: 5 7 3
Output 1: 20 20
Input 2: 2 8 4
Output 2: 8 2
*/

#include <iostream>
using namespace std;

int perimeter(int side){
    return side*4;
}

int perimeter(int length, int width){
    return 2*(length + width);
}

int main(){
    int side, length,width;
    cout<<"Enter teh side, lenght, width : ";
    cin>>side>>length>>width;

    cout<<perimeter(side)<<endl;
    cout<<perimeter(length,width);
    return 0;
}