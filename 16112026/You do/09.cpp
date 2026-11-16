/*
Count the digits on a ticket
Problem Statement: A desk prints an integer ticket number from 0 to
999999. Use a loop inside a function to count its digits and display the
returned count in main. The ticket number 0 has one digit.
Function to use: int countDigits(int ticket);
Test Cases:
Input 1: 5080
Output 1: 4
Input 2: 0
Output 2: 1
*/

#include <iostream>
using namespace std;

int countDigits(int ticket){
    int digits = 0;
    while(ticket != 0){
        ticket /= 10;
        digits++;
    }
    return digits;
}

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    cout<<countDigits(num);
    return 0;
}