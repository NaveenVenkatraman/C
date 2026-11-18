/*
Calculate a parcel charge
Problem Statement: A delivery desk charges ₹10 per parcel. Read a 
parcel count from 0 to 100 and a whole-rupee handling fee from 0 to 
100. Overload parcelCharge to calculate the charge with and without the 
fee. Print the standard charge followed by the charge including the fee 
on the same line.
Function to use: int parcelCharge(int parcels); int 
parcelCharge(int parcels, int fee);
Test Cases:
Input 1: 3 15
Output 1: 30 45
Input 2: 0 0
Output 2: 0 0
*/

#include <iostream>
using namespace std;

int parcelCharge(int parcels) {
    return parcels * 10;
}

int parcelCharge(int parcels, int fee) {
    return (parcels * 10) + fee;
}

int main() {
    int parcels, fee;

    cout << "Enter the Parcels and Fee: ";
    cin >> parcels >> fee;

    cout << parcelCharge(parcels) << " "
         << parcelCharge(parcels, fee) << endl;

    return 0;
}
