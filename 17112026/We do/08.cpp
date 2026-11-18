/*
Preview a canteen balance
Problem Statement: A student has a prepaid canteen balance. Read the 
balance and purchase cost in whole rupees, with 0 ≤ cost ≤ balance ≤ 
1000. Pass both amounts by value. Subtract the cost from the copied 
balance inside previewBalance and return the result. Print the original 
balance followed by the preview on the same line.
Function to use: int previewBalance(int balance, int 
cost);
Test Cases:
Input 1: 150 35
Output 1: 150 115
Input 2: 50 50
Output 2: 50 0
*/

#include <iostream>
using namespace std;

int previewBalance(int balance, int cost){
    return balance - cost;
}

int main(){
    int balance,cost;
    cout<<"Enter the Balance and Cost : ";
    cin>>balance>>cost;
    cout<<balance<<" "<<previewBalance(balance,cost);
    return 0;
}