/*
Find the area of two shapes
Problem Statement: A designer calculates areas for a square and a
rectangle. Read three integers from 1 to 100: square side, rectangle
length and rectangle width. Use one overload for the square and another
for the rectangle. Print the results in that order. Function to use: int area(int side);
int area(int length, int width);
Test Cases:
Input 1: 4 6 3
Output 1: 16 18
Input 2: 1 5 2
Output 2:1 10
*/

#include <iostream>
using namespace std;

int area(int side){
    return side*side;
}

int area(int length, int width){
    return length*width;
}

int main(){
    int side,length,width;
    cout<<"Enter the side, length, and width : ";
    cin>>side>>length>>width;

    cout<<"Area of Square : "<<area(side)<<endl;
    cout<<"Area of Rectangle : "<<area(length,width)<<endl;

    return 0;
}