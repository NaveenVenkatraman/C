/*
Print the last digit of a number
Problem Statement: Given a number, determine the last digit
of a number.
*/


#include <iostream>
using namespace std;

int main() {

    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    cout<<"Last digit of the Number is : "<<num%10;

    return 0;
}
