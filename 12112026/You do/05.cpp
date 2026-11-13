/*
Combine attendance records
Problem Statement – Two volunteers count attendees across the same 
sections. Each records a 3 × 2 grid.
Given Data – First grid rows = {5, 8}, {3, 7}, {9, 2}. Second grid rows = {4, 1}, 
{6, 5}, {2, 8}.
Task – Use nested loops to add corresponding cells into a third grid. Print the 
combined grid and the total for each row.

*/

#include <iostream>
using namespace std;

int main(){
    int first_grid[3][2] = {{5, 8}, {3, 7}, {9, 2}};
    int second_grid[3][2] = {{4, 1}, {6, 5}, {2, 8}};

    int third_grid[3][2];
    int each_row_total = 0;

    for(int i=0; i<3;i++){
        for(int j=0; j<2; j++){
            third_grid[i][j] = first_grid[i][j] + second_grid[i][j];
        }
    }

     for(int i=0; i<3;i++){
        each_row_total = 0;
        for(int j=0; j<2; j++){
            cout<<third_grid[i][j]<<" ";
            each_row_total += third_grid[i][j];
        }
        cout<<"\t| Row total : "<<each_row_total<<endl;
    }

    return 0;
}