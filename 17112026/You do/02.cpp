/*
Keep the demo marks separate
Problem Statement: Read a student’s mark from 0 to 100 into a variable
named marks in main. A demo function has its own local marks set to 50. Call it to print its demo mark, then print the student’s mark on the next
line. Explain which marks each statement uses. Function to use: void showDemoMarks();
Test Cases:
Input 1: 73
Output 1: 50 / 73
Input 2: 0
Output 2:*/

#include <iostream>
using namespace std;
int marks;

void showDemoMarks(){
    int demoMark = 50;
    cout<<demoMark<<"/"<<marks;
}

int main(){
    cout<<"Enter the Marks : ";
    cin>>marks;
    showDemoMarks();

    return 0;
}