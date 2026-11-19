/*
Read a selected sensor value
Problem Statement: Four sensors store readings from −100 to 100 in 
order. Read the four values and an index from 0 to 3. With a pointer to 
the first element, use an offset and dereference it to print the selected 
reading.
Test Cases:
Input 1: 12 15 21 28 2
Output 1: 21
Input 2: -8 0 2 5 0
Output 2: -8
*/

#include <iostream>
using namespace std;


int main(){
    int sensors_readings[5];

    cout<<"Enter the Four Readings : ";
    for(int i=0; i<5; i++){
        cin>>sensors_readings[i];
    }
    int lastIndex = sensors_readings[4];

    cout<<*(sensors_readings+lastIndex);
    
    return 0;
}