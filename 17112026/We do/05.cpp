/*
Read the hall capacity
Problem Statement: A hall has a fixed capacity of 30 seats. Declare const 
int hallCapacity = 30 outside and above all functions. Read the number of 
occupied seats from 0 to 30. Print the capacity in main, then call 
remainingSeats to calculate and print the remaining seats on the next 
line. Explain how both functions can use hallCapacity.
Function to use: int remainingSeats(int occupied);
Test Cases:
Input 1: 12
Output 1: 30 / 18
Input 2: 30
Output 2: 30 / 0
*/

#include <iostream>
using namespace std;
const int hallCapacity = 30;

int remainingSeats(int occupied){
    return hallCapacity - occupied;
}

int main(){
    int occupied;
    cout<<"Enter the Occupied Count : ";
    cin>>occupied;
    cout<<"Capacity : "<<hallCapacity<<"\t";
    
    cout<<remainingSeats(occupied);
    return 0;
}