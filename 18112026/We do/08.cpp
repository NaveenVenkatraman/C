/*
Total the daily steps
Problem Statement: A fitness club records five daily step counts from 0 
to 20000. Use a pointer to visit each array element and sum the counts. 
Stop at the one-past-the-end pointer. Print the total.
Test Cases:
Input 1: 4 5 6 7 8
Output 1: 30
Input 2: 0 0 0 0 0
Output 2: 0
*/

#include <iostream>
using namespace std;


int main(){
    int records[5];
    int sum = 0;

    cout<<"Enter the Five Records : ";
    for(int i=0; i<5; i++){
        cin>>*(records + i);
        sum += *(records + i );
    }

    cout<<sum;
    
    return 0;
}