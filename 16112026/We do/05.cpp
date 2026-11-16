/*
Read a choice with a function
Problem Statement: A classroom menu accepts choice 1 or 2. Write a 
function that reads one valid choice from the console and returns it. 
Display the returned choice in main.
Function to use: int readChoice();
Test Cases:
Input 1: 2
Output 1: 2
*/

#include <iostream>
using namespace std;

int readChoice(){
    int choice;
    
    while(true){
        cout<<"Enter the choice 1 or 2 : ";
        cin>>choice;
        if(choice == 1 or choice == 2){
            break;
        }else{
            continue;
        }
        
    }
    return choice;
}

int main(){
    cout<<readChoice();
    return 0;
}