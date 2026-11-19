/*
Check if number is divisible by 10
Problem Statement: Given an input number, your task is to
check whether it is divisible by 10. Use the modulo operator % to check if a number is divisible by
10 — if the remainder is 0, it's divisible by 10; otherwise, it's not
*/


#include <iostream>
using namespace std;

int main() {

    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    if(num%10==0){
        cout<<"Divisible by 10";
    }else{
        cout<<"Not divisible by 10";
    }

    return 0;
}
