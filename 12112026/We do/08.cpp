/*
Locate a classroom seat
Nila is helping a volunteer guide guests to their seats at a college 
seminar. The hall plan shows two rows with three seats in each, and 
every seat has a code. The volunteer’s list gives row index 1 and column 
index 2. Nila also needs to tell the volunteer which coordinates the chart 
can accept.
The seat codes in the first row are 11, 12, 13. The second row contains 
21, 22, 23.
Which seat code is at the requested position, and what row and column 
indices are valid

*/

#include <iostream>
using namespace std;

int main(){
    int seat_chart[2][3] = {{11, 12, 13},{21, 22, 23}};
    int requested_row,requested_col;

    cout<<"\n\t|------SEAT CHART-------|\n";

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout <<"\t"<< seat_chart[i][j] << "  ";
        }
        cout << endl;
    }
    cout<<"\t|-----------------------|\n";

    cout<<"Enter row index : ";
    cin>>requested_row;
    cout<<"Enter column index : ";
    cin>>requested_col;
    
    cout<<"\nSeat Code : "<<seat_chart[requested_row][requested_col]<<endl;

     cout << "\nValid Row Indices = 0 to 1";
    cout << "\nValid Column Indices = 0 to 2" << endl;

    return 0;
}