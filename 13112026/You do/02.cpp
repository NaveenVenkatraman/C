/*
Read a 2D array
Problem Statement – After a workshop, Ravi receives 
attendance counts for two rows of three classrooms. He 
types 18, 20, 19, 21, 17, and 22 in the order they appear 
on the sheet. Write a program that reads the six counts 
into a 2 × 3 array, fills the first row before the second, 
and displays both rows.
Constraints: Read exactly six integers into a 2 × 3 array, filling each row 
before starting the next.
Test Cases:
Input 1: 18 20 19 21 17 22
Output 1: 18 20 19 / 21 17 22
Input 2: 0 -1 2 3 -4 5
Output 2: 0 -1 2 / 3 -4 5
A slash separates rows in the test data.
*/

#include <iostream>
using namespace std;

int main(){
    int label_1[6];
    int label_2[2][3];

    cout<<"Enter the 6 values : ";
    for(int i=0; i<6;i++){
            cin>>label_1[i];
        }
    

    int divider = 0;
    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            label_2[i][j] = label_1[divider++];
        }
    }

    cout<<"\n------------------------\n";

    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            cout<<label_2[i][j]<<" ";
        }
        cout<<endl;
    }
}