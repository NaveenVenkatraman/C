/*
Measure a temperature difference
Problem Statement: A weather club records two whole-number 
temperatures between −50 and 60. Write a function that returns the 
difference as a non-negative value using std::abs from <cstdlib>. In 
discussion, identify the library and user-defined calls.
Function to use: int temperatureGap(int first, int 
second);
Test Cases:
Input 1: −3 and 5
Output 1: 8
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int temperatureGap(int first, int second){
    return  abs(first-second);
}

int main(){
    int first,second;
    cout<<"Enter the First and Second value : ";
    cin >>first>>second;
    cout<<temperatureGap(first,second);
}
