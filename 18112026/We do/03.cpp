/*
Share and redirect a pointer
Problem Statement: A school has two attendance counters, each from 0 
to 100. Point p to the first counter and copy p into q. Add one to the first 
counter through q. Redirect q to the second counter and print *p and *q 
in order.
Test Cases:
Input 1: 12 16
Output 1: 13 16
Input 2: 0 8
Output 2: 1 8
*/
#include <iostream>
using namespace std;

int main(){
    int counter_1,counter_2;
    cout<<"Enter the Attendance counter 1 : ";
    cin>>counter_1;
    cout<<"Enter the Attendance counter 2 : ";
    cin>>counter_2;

    int *p = &counter_1;
    int *q = p;
    *q = counter_1 + 1;

    q = &counter_2;

    cout<<*p<<" "<<*q;

    
    return 0;
}