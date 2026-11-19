/*
Check for an assigned seat
Problem Statement: A registration desk enters a seat number from 1 to 
50, or 0 when no seat is assigned. Start with a null pointer. Assign the 
address of the seat variable only for a positive seat number. Check the 
pointer before printing the seat through it. Print No seat when it is null.
Test Cases:
Input 1: 0
Output 1: No seat
Input 2: 12
Output 2: 12
*/

#include <iostream>
using namespace std;

int main(){
    int *ptr  = NULL;
    int seat;
    cout<<"Enter the Seat : ";
    cin>>seat;

    if(seat>0){
        ptr = &seat;
    }

    if(ptr != NULL){
        cout<<*ptr;
    }else{
        cout<<"No seat";
    }
    return 0;
}
