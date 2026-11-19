/*
Give a bonus through an address
Problem Statement: A teacher enters a score from 0 to 100. Pass its 
address to addBonus and use the pointer parameter to add five marks. 
Print the updated score in main.
Declaration to use: void addBonus(int* score);
Test Cases:
Input 1: 70
Output 1: 75
Input 2: 0
Output 2: 5
*/

#include <iostream>
using namespace std;

void addBonus(int* score){
    *score += 5;
}

int main(){
    int score;
    cout<<"Enter the Score : ";
    cin>>score;
    addBonus( &score);

    cout<<"\nScore : "<<score;
    return 0;
}