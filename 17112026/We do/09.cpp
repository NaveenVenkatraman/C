/*
Trace two amounts with the same name
Problem Statement: A stall records the number of cups sold in amount. 
Read a count from 0 to 100. Inside an if block that runs when amount is 
positive, declare another variable named amount and set it to 2 for the 
number of free samples. Print the inner amount, then print the sales 
count after the block on a new line. Explain which declaration each print 
statement uses.
Function to use: void showAmounts(int amount);
Test Cases:
Input 1: 8
Output 1: 2 / 8
Input 2: 0
Output 2: 0
*/

#include <iostream>
using namespace std;

void showAmounts(int amount){
     if (amount > 0) {
        int amount = 2;  
        cout << amount << endl;
    }

    cout << amount << endl;
}

int main(){
    int amount;
    cout<<"Enter the Amount : ";
    cin>>amount;
    showAmounts(amount);
    return 0;
}