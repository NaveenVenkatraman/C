/*
Find a bicycle ride total
Problem Statement: Maya rides 2 kilometres on the first day and 
rides 2 kilometres farther each following day. She keeps a 
running total of the distance.
Constraints: The number of days must be from 1 to 15. The 
target is 12 kilometres.
Write a C++ program. Use a for loop to print the distance and 
running total for each day. Print the number of days when the 
total is at least 12 kilometres after the final day. Otherwise print 
Target not reached.
Test Cases:
Input 1: Days = 4
Output 1:
Distance = 2, Total = 2
Distance = 4, Total = 6
Distance = 6, Total = 12
Distance = 8, Total = 20
Days = 4
Explanation: The target is checked after adding the distance for 
every scheduled day.
Input 2: Days = 2
Output 2:
Distance = 2, Total = 2
Distance = 4, Total = 6
Target not reached
*/

#include <iostream>
using namespace std;

int main(){
    int days;
    cout<<"Enter the days : ";
    cin>>days;
    int target = 12;
    int distance = 0;
    int total = 0;

    for(int i=1; i<days+1; i++){
        distance += 2;
        total += distance;
        cout<<"distance : "<<distance<<endl;
        cout<<"total : "<<total<<endl;
    }

    if(target < total){
        cout<<"Days : "<<days;
    }
    else{
        cout<<"Target not reached";
    }
    return 0;
}