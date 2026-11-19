/*
Read a parcel weight
Problem Statement: A courier enters a whole-number weight from 0 to
100 kg. Initialise an int pointer with the weight variable’s address. Use
dereferencing to print the weight. Test Cases:
Input 1: 17
Output 1: 17
Input 2: 0
Output 2: 
*/

#include <iostream>
using namespace std;

int main(){
    int weight;
    int *ptr = &weight;
    cout<<"Enter the weight : ";
    cin>>weight;
    cout<<"\n"<<*ptr;
    return 0;
}