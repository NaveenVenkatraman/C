/*
Read a team size
Problem Statement: A quiz coordinator enters a valid team size from 1 to 
6. Read it inside a function, return it, and display it from main.
Function to use: int readTeamSize();
Test Cases:
Input 1: 4
Output 1: 4
*/

#include <iostream>
using namespace std;

int readTeamSize(){
    int size;
    while(true){
         cout<<"Enter the Team Size : ";
        cin>>size;
        if(size>0 && size<7){
            break;    
         }
        else{
            continue;
        }
    }
    return size;
}

int main(){
    cout<<readTeamSize();
    return 0;
}