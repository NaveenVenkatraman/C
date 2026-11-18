/*
Use a block-local quantity
Problem Statement: A shop packs an extra box only if the order contains 
at least 10 items. Read an item count from 0 to 100. In the if block of 
printOrder, declare extraBoxes and print its value, 1. After the block, 
print the item count on its own line. Identify where extraBoxes is in 
scope.
Function to use: void printOrder(int items);
Test Cases:
Input 1: 12
Output 1: 1 / 12
Input 2: 9

Output 2: 9
*/

#include <iostream>
using namespace std;

void printOrder(int items){
    int boxes = items/10;
    cout<<"Boxes : "<<boxes<<endl;
    cout<<"Remaining items Without Boxes : "<<items%10<<endl;
}

int main(){
    int items;
    cout<<"Enter the items : ";
    cin>>items;
    printOrder(items);
    cout<<"Items : "<<items;
    return 0;
}
