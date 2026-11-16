/*
Count even ticket numbers
Problem Statement: A club numbers its tickets from 1 through n. Read n 
between 0 and 1000 and write a function that uses a loop to count how 
many tickets have an even number.
Function to use: int countEvenTickets(int n);
Test Cases:
Input 1: 7
Output 1: 3
Input 2: 0
Output 2: 0
*/

#include <iostream>
using namespace std;

int countEvenTickets(int n){
    int count =0;
    for(int i=1 ; i<n; i++){
        if(i%2==0){
            count++;
        }
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter the Num : ";
    cin>>num;
    cout<<countEvenTickets(num);
    return 0;
}
