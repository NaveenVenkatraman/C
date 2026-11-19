/*
D23. A shop gives a 10 percent discount if the bill is above 1000 rupees. Write int pay = bill > 1000 
? bill - bill * 10 / 100 : bill; and find pay when bill is 1200.*/

#include <iostream>
using namespace std;

int main(){
    int bill = 1200;
    int pay = bill>1000 ? bill - (bill*10)/100 : bill;
    cout<<"Pay : "<<pay;
    return 0;
}