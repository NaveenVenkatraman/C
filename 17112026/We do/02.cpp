/*
Keep two counters separate
Problem Statement: An exhibition has a running visitor count. Read a 
count from 0 to 100 into a local variable named count in main. A function 
named printDemo has its own local count set to 3. Call printDemo, then 
print the count in main on the next line. Explain why both variables can 
share the same name.
Function to use: void printDemo();
Test Cases:
Input 1: 12
Output 1: 3 / 12
Input 2: 0
Output 2: 3 / 0
*/

#include <iostream>
using namespace std;

void printDemo(){
    int count = 3;
    cout<<count;
}

int main()
{
    int count;
    cout<<"Enter the count : ";
    cin>>count;
     printDemo();
    cout<<"/"<<count;

}

