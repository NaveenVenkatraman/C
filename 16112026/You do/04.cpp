/*
.
Question Detail Level
4
Add two numbers
Problem Statement: A classroom counter records the number of books 
borrowed on two days. Read both counts, pass them to a function and 
display the returned total.
Function to use: int sum(int first, int second);
Test Cases:
Input 1: 23 and 19
Output 1: 42
*/

#include <iostream>
using namespace std;

int addTwoNumber(int first , int second){
    return first+second;
}

int main(){
    int first,second;
    cout<<"Enter the first Number : ";
    cin>>first;
    cout<<"Enter the second Number : ";
    cin>>second;
    cout<<addTwoNumber(first,second);
    return 0;
}