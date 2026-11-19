/*
Declare a 2D array
Problem Statement – Before a college quiz, Meena labels 
the seats in two rows. The front row has labels 11, 12, 
and 13, and the back row has labels 21, 22, and 23. She 
wants the computer to show the same seating plan. 
Declare and initialise a 2 × 3 integer array with those 
labels, then display it as two rows.
Constraints: Use exactly 2 rows and 3 columns of integers. Initialise the 
array in the declaration.
Test Cases:
Input 1: Preset values · Labels: 11 12 13 / 21 22 23
Output 1: 11 12 13 / 21 22 23
Input 2: Change preset values · Labels: 0 2 4 / 6 8 10
Output 2: 0 2 4 / 6 8 10
A slash separates rows in the test data.
*/

#include <iostream>
using namespace std;

int main(){
    int label_1[2][3];
    int label_2[2][3];

    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            cout<<"Enter the row [ "<<i<<" ] & col [ "<<j<<" ] : ";
            cin>>label_1[i][j];
        }
    }

    
    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            cout<<"Enter the row [ "<<i<<" ] & col [ "<<j<<" ] : ";
            cin>>label_2[i][j];
        }
    }

    cout<<"\n------------------------\n";

    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            cout<<label_1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n------------------------\n";

    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            cout<<label_2[i][j]<<" ";
        }
        cout<<endl;
    }


}