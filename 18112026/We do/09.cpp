/*
Problem Statement: A rack stores six numbered slots in an array. Read 
two indices from 0 to 5 with the first no greater than the second. Point to 
both elements and subtract the earlier pointer from the later pointer. 
Print the distance in elements.
Test Cases:
Input 1: 1 4
Output 1: 3
Input 2: 5 5
Output 2: 0
*/

#include <iostream>
using namespace std;


int main(){
    int slots[6];
    int index_1,index_2;

    cout<<"Enter the six slots : ";
    for(int i=0; i<6; i++){
        cin>>*(slots + i);
    }

    cout<<"\nEnter the index 1 (0 to 5) : ";
    cin>>index_1;
    cout<<"\nEnter the index 2 (0 to 5) : ";
    cin>>index_2;

    int *ptr_1 = &slots[index_1];
    int *ptr_2 = &slots[index_2];


    cout<<ptr_1 - ptr_2;
    
    
    return 0;
}