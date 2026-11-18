/*
Calculate a discount inside a block
Problem Statement: A shop gives a ₹50 discount when the bill is at least
₹500. Read a whole-rupee bill from 0 to 5000. In the if block of the
function, declare a local discount variable and subtract it from the bill. Return the payable amount after the block and explain where discount is
in scope. Function to use: int payableAmount(int bill);
Test Cases:
Input 1: 650
Output 1: 600
Input 2: 499
Output 2: 499
*/

#include <iostream>
using namespace std;

int payableAmount(int bill){
    if(bill >= 500){
        return bill-50;
    }
    else{
        return bill;
    }
}

int main(){
    int totalAmount;
    cout<<"Enter the Bill Amount : ";
    cin>>totalAmount;
    cout<<payableAmount(totalAmount);
    return 0;
}