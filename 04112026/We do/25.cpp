/*
D25. A cashier program reads the price and the quantity as integers and prints Total = followed by price 
times quantity. Write the program and show the output when the input is 12 and then 5.
*/
#include <iostream>
using namespace std;

int main(){
    int price = 12;
    int quantity = 5;
    int total = price * quantity;
    cout<<"Total : "<<total;
    
    return 0;
}