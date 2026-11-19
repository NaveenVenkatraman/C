/*
Check whether a locker was selected
Problem Statement: A student enters a locker number from 1 to 30, or 0
for no locker. Start with nullptr and point to the locker variable only
when a locker is selected. Print its value after checking the pointer, or
print No locker. Test Cases:
Input 1: 0
Output 1: No locker
Input 2: 18
Output 2:
*/


#include <iostream>
using namespace std;

int main(){
    int *ptr  = NULL;
    int locker_number;
    cout<<"Enter the Locker Number : ";
    cin>>locker_number;

    if(locker_number>0){
        ptr = &locker_number;
    }

    if(ptr != NULL){
        cout<<*ptr;
    }else{
        cout<<"No locker";
    }
    return 0;
}
