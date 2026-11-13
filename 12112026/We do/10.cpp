/*
Add two stock grids
At a collection drive, volunteers on two shifts record how many items 
they put into each of six bins. Both shifts use the same two-shelf layout, 
with three bins on each shelf. The supervisor needs one closing report 
showing the combined count for each bin in its original position.
The morning rows are 2, 4, 1 and 3, 0, 5. The evening rows are 7, 1, 6 and 
2, 8, 4.
How should the supervisor combine the two records into one grid?

*/

#include <iostream>
using namespace std;

int main(){
    int morning_row[2][3] = {{2, 4, 1 },{3, 0, 5}};
    int evening_row[2][3] = {{7, 1, 6}, {2, 8, 4}};

    int third_grid[2][3];

    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            third_grid[i][j] = morning_row[i][j] + evening_row[i][j];
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