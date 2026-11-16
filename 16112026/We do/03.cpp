/*
Add two scores
Problem Statement: A student earns points in two quiz rounds. Read the 
two scores, pass them to a function and display the returned total in 
main.
Function to use: int addScores(int first, int second);
Test Cases:
Input 1: 12 and 18
Output 1: 30
*/

#include <iostream>
using namespace std;

int addScores(int first , int second){
    return first+second;
}

int main(){
    int first,second;
    cout<<"Enter the first Number : ";
    cin>>first;
    cout<<"Enter the second Number : ";
    cin>>second;
    cout<<addScores(first,second);
    return 0;
}