/*
Find a square root
Problem Statement: A craft group knows the area of a square tile and 
needs its side length. Read a non-negative area and call std::sqrt from 
<cmath> in main. Identify the argument and the returned value.
Function to use: Use std::sqrt(area) directly.
Test Cases:
Input 1: 81
Output 1: 9
*/

#include <iostream>
#include <cmath>
using namespace std;

int squareRoot(int area){
    return sqrt(area);
}

int main(){
    int area;
    cout<<"Enter the area : ";
    cin>>area;
    
    cout<<squareRoot(area);
    return 0;
}