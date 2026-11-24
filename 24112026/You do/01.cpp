
#include <iostream>
#include <iomanip>
using namespace std;

struct Parcel {
    int trackingNumber;
    string city;
    double weight;

    void printLabel() {
        cout << "Parcel " << trackingNumber << " | "
             << city << " | "
             << fixed << setprecision(2) << weight << " kg" << endl;
    }
};

int main() {
    Parcel p1, p2;

    cout << "Enter the tracking number for Parcel 1: ";
    cin >> p1.trackingNumber;

    cout << "Enter the destination city for Parcel 1: ";
    cin >> p1.city;

    cout << "Enter the weight in kg for Parcel 1: ";
    cin >> p1.weight;

    cout << "Enter the tracking number for Parcel 2: ";
    cin >> p2.trackingNumber;

    cout << "Enter the destination city for Parcel 2: ";
    cin >> p2.city;

    cout << "Enter the weight in kg for Parcel 2: ";
    cin >> p2.weight;

    p1.printLabel();
    p2.printLabel();

    return 0;
}
