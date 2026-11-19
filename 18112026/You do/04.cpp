/*
Add returned books through a pointer
Problem Statement: A library enters the current shelf count and the
number of returns, each from 0 to 1000. Pass the shelf count’s address to
addReturns. Update it in the function and print the result in main. Declaration to use: void addReturns(int* count, int
returned);
Test Cases:
Input 1: 12 8
Output 1: 20
Input 2: 0 2
Output 2: 2
*/

#include <iostream>
using namespace std;

void addReturns(int *count, int returned){
    *count += returned;
}

int main(){
    int count,returned;
    cout<<"Enter the shelf count : ";
    cin>>count;
    cout<<"Enter the returned : ";
    cin>>returned;

    addReturns(&count,returned);

    cout<<count;
    return 0;
}