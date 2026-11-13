/*
Update a quiz score
Problem Statement – A teacher needs to correct a single score after checking 
a student’s answer sheet.
Given Data – Scores = 55, 72, 68, 91, 83. Test index 2 with score 76, and 
index 5 with score 60.
Task – For each test, start with the given array. Check the index before 
updating. Print the resulting array or Invalid index.

*/


#include <iostream>
using namespace std;

int main(){
    int scores[5] ={55, 72, 68, 91, 83};

    int index,score;
    cout<<"Enter the index : ";
    cin>>index;
    cout<<"Enter the score : ";
    cin>>score;

    if(index>=0 && index<5){
        scores[index] = score;

        cout<<"Updated Scores : { ";

        for(int i=0; i<5; i++){
            cout<<scores[i]<<", ";
        }
        cout<<" } ";
    }
    else{
        cout<<"Invalid index "<<index<<endl;
    }

    return 0;
}