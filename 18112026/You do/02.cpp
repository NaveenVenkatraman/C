/*
Update a ticket count
Problem Statement: A booth records an initial ticket count from 0 to
1000 and a number sold from 0 up to that count. Use a pointer to
subtract the number sold from the count. Print the remaining tickets. Test Cases:
Input 1: 40 13
Output 1: 27
Input 2: 9 9
Output 2:
*/

#include <iostream>
using namespace std;

int main(){
    int count,sold;
    int *ptr = &count;
     cout<<"Enter the count : ";
     cin>>count;
     cout<<"Enter the sold : ";
     cin>>sold;
    *ptr = count-sold;
    cout<<*ptr;

    return 0;
}