/*
Count days meeting a target
Problem Statement: Read five exercise durations from 0 to 120 minutes, then a target from 0 to 120. Traverse the array using a pointer and count
how many durations are at least the target. Print the count. Test Cases:
Input 1: 10 20 30 35 5 30
Output 1: 2
Input 2: 0 1 2 3 4 0
Output 2: 5
*/

#include <iostream>
using namespace std;

int main(){
    int durations[5];
    int target;
    int count = 0;
    cout<<"Enter the five duriations : ";
    for(int i=0; i<5; i++){
        cin>>*(durations + i);
    }
    cout<<"Enter the target : ";
    cin>>target;

     for(int i=0; i<5; i++){
        if(*(durations+i) >= target){
            count++;
        }
    }
    cout<<count;
    return 0;
}