/*
Display a stock grid
At closing time, Hari counts the stock in a shop’s two shelves. Each shelf 
has three numbered bins. The owner wants the closing record to show 
the bins in shelf order so tomorrow’s staff can check the counts. The 
owner also wants a total for each shelf to compare with the stock 
register.
The first shelf has 4, 7, and 2 items in its bins. The second has 6, 1, and 9.
How should Hari display the bin counts and the total for each shelf?

*/

#include <iostream>
using namespace std;

int main(){
    int shelf_1[3] = {4, 7, 2 };
    int shelf_2[3] = {6, 1, 9 };
    int shelf_1_total =0;
    int shelf_2_total =0;

    for(int j=0; j<3; j++){
            shelf_1_total += shelf_1[j];
        }
    cout<<"Total of Shelf 1 : "<<shelf_1_total<<endl;

    for(int j=0; j<3; j++){
            shelf_2_total += shelf_2[j];
    }
    cout<<"Total of Shelf 2 : "<<shelf_2_total<<endl;

    return 0;
}