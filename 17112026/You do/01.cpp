/*Preview a ticket price
Problem Statement: A club wants to show a ticket price after adding a
₹20 fee. Read a whole-rupee price from 0 to 1000. Pass it by value, add
the fee inside the function and return the preview. Print the original price
followed by the preview. Function to use: int previewTicketPrice(int price);
Test Cases:
Input 1: 100
Output 1: 100 120
Input 2: 0
Output 2:
*/

#include <iostream>
using namespace std;

int previewTicketPrice(int price){
    return price+20;
}

int main(){
    int originalPrice;
    cout<<"Enter the Price : ";
    cin>>originalPrice;

    cout<<"Origianl Price : "<<originalPrice<<endl;
    cout<<"Preview : "<<previewTicketPrice(originalPrice);
    return 0;
}