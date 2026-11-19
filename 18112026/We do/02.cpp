/*
Correct a stock count
Problem Statement: A shop assistant enters an original stock count and a 
corrected count, each from 0 to 1000. Point to the original count and 
replace it through the pointer. Print the original variable after the 
change.
Test Cases:
Input 1: 14 19
Output 1: 19
Input 2: 8 0
Output 2: 0
  */

#include <iostream>
using namespace std;

int main(){
    int num;
    int replace;
    int *ptr = &num;
    cout<<"Enter the value of num and replace value : "<<endl;
    cin>>num>>replace;
    *ptr = replace;
    cout<<"Number : "<<num;
    return 0;
}