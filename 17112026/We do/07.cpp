/*
Double whole and decimal quantities
Problem Statement: A recipe tool doubles both whole and decimal 
quantities. Read an int and a double, each from 0 to 100. Overload twice 
by parameter type and pass each input to its matching overload. Print 
both returned values.
Function to use: int twice(int amount);
double twice(double amount);
Test Cases:
Input 1: 4 2.25
Output 1: 8 4.5
Input 2: 0 1.5
Output 2: 0 3
*/

#include <iostream>
using namespace std;

int twice(int amount){
    return amount*2;
}

double twice(double amount){
    return 2*amount;
}

int main(){
    // int amount;
    double amountDouble;
    cout<<"Enter the amount : ";
    cin>>amountDouble;

    cout<<twice(amountDouble);
    return 0;
}