/*
Delete by index
Problem Statement – A registration desk has room for six 
entries and currently holds IDs 101, 102, 103, 104, and 
105. The participant at index 2 cancels. Delete that entry 
by shifting the later IDs one slot to the left, then display 
only the remaining registered IDs.
Constraints: Capacity is 6 and initial used size is 5. The deletion index 
must be between 0 and 4. Shift in the same array.
Test Cases:
Input 1: Preset values · IDs: 101 102 103 104 105. Index: 2
Output 1: 101 102 104 105
Input 2: Change preset values · Same IDs. Index: 4
Output 2: 101 102 103 104
*/

#include <iostream>
using namespace std;

int main(){
    int ids[5] = { 101, 102, 103, 104, 105};
    int index = 2;

    cout<<"Before Delete : "<<endl;
    for(int i=0; i<5; i++){
        cout<<ids[i]<<" ";
    }

    for(int i=index; i<5; i++){
        ids[i] = ids[i+1];
    }

     cout<<"\nAfter Delete : "<<endl;
     for(int i=0; i<4; i++){
        cout<<ids[i]<<" ";
    }
    return 0;
}