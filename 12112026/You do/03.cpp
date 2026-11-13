/*
Search for all matching IDs
Problem Statement – A lab assistant needs to find every entry associated 
with an equipment ID.
Given Data – IDs = 21, 35, 21, 44, 21, 50. Test targets 21 and 99.
Task – Print every matching index in ascending order and the match count. 
Print Not found when the count is zero.

*/

#include <iostream>
using namespace std;

int main(){
    int data[6] = {21, 35, 21, 44, 21, 50};
    int targets[2] = {21,99};

    int match_count = 0;

    
    for(int i=0; i<2; i++){
        cout<<"Test targets "<<targets[i]<<" "<<endl;
        for(int j=0; j<6; j++){
            if(targets[i] == data[j]){
                cout<<j<<endl;
                match_count++;
            }
        }

        if(match_count){
            cout<<"Match count : "<<match_count<<endl;
            match_count =0;
    }
        else{
            cout<<"Not found"<<endl;
    }

    }

    

    return 0;
}