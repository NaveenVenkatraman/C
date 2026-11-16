/*
Total the digits of a code
Problem Statement: A puzzle card shows a non-negative integer from 0 
to 999999. Write a function that returns the sum of its digits. Print the 
sum in main.
Function to use: int sumDigits(int number);
Test Cases:
Input 1: 402
Output 1: 6
Input 2: 0
Output 2: 0

*/

#include <iostream>
using namespace std;

int sumDigits(int number){
    int sum =0;
    while(number !=0){
        sum += number%10;
        number /= 10;
        
    }
    return sum;
 }

 int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>>number;
    cout<<sumDigits(number);
    return 0;
 }