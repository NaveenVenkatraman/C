/*
Add two 2D arrays
Problem Statement – At a college fest, two volunteers 
count visitors at the same six stalls. Their tally sheets 
show A = {{2, 4, 6}, {1, 3, 5}} and B = {{3, 1, 2}, {4, 2, 
1}}. The organiser needs one combined sheet. Add the 
counts for each matching stall, store them in a third 2 × 3 
array, and display the result.
Constraints: Both input arrays and the result must be 2 × 3. Use integers 
from -1000 through 1000 in the input arrays.
Test Cases:
Input 1: Preset values · A: 2 4 6 / 1 3 5. B: 3 1 2 / 4 2 1
Output 1: 5 5 8 / 5 5 6
Input 2: Change preset values · A: 0 0 0 / 0 0 0. B: -2 3 4 / 5 -6 7
Output 2: -2 3 4 / 5 -6 7
A slash separates rows in the test data.
*/

#include <iostream>
using namespace std;

int main(){
    int first_grid[2][3] ={{2, 4, 6}, {1, 3, 5}} ;
    int second_grid[2][3] = {{3, 1, 2}, {4, 2, 1}};

    int third_grid[2][3];

    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            third_grid[i][j] = first_grid[i][j] + second_grid[i][j];
        }
    }

     for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            cout<<third_grid[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}