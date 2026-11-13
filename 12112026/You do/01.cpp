/*
Problem Statement – A store records its delivery count for each of six days.
Given Data – Keyboard input = 12 9 15 8 17 11.
Task – Read the values into an array. Print the first and last counts, then print 
all six values in reverse order.

*/


#include <iostream>
using namespace std;

int main(){
    int records[6];

    for(int i=1; i<7; i++){
        cout<<"Enter the Day "<<i<<" Record : ";
        cin>>records[i-1];
    }

    cout<<"First Count = "<<records[0]<<endl;
    cout<<"Last Count = "<<records[5]<<endl;

    for(int i=5; i>=0; i--){
        cout<<records[i]<<endl;  
    }

    return 0;
}