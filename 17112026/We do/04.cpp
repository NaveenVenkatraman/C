/*
Count seats in a row
Problem Statement: A hall has rows with different seat counts. Read one 
row’s seat count from 0 to 100 into rowSeats in main. Pass it to 
showSeats, whose parameter is named seats. Print the seat count inside 
showSeats. Explain where seats can be used and which name main uses.
Function to use: void showSeats(int seats);
Test Cases:
Input 1: 12
Output 1: 12
Input 2: 0
Output 2: 0*/

#include <iostream>
using namespace std;

void showSeats(int seats){
    cout<<seats;
}

int main(){
    int seats;
    cout<<"Enter the seats : ";
    cin>>seats;
    showSeats(seats);
    return 0;
}