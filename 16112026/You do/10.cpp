/*
Calculate the total savings
Problem Statement: A student saves ₹5 on day 1, ₹10 on day 2, ₹15 on
day 3, and so on. Read the number of days from 0 to 30. Use a loop inside
a function to return the total saved.
Function to use: int totalSavings(int days);
Test Cases:
Input 1: 4
Output 1: 50 rupees
Input 2: 0
Output 2: 0 rupees*/

#include <iostream>
using namespace std;

int totalSavings(int days){
    int savings = 0;
    for(int i=1; i<=days; i++){
        savings += i*5;
    }
    return savings;
}

int main(){
    int days;
    cout<<"Enter the days : ";
    cin>>days;
    cout<<totalSavings(days)<<" rupees";
    return 0;
}