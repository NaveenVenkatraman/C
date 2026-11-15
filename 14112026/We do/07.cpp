#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    string middleWord;
    string district;

    cout << "Enter the city: ";
    cin >> city;

    cout << "Enter the joining word (and): ";
    cin >> middleWord;

    cout << "Enter the district: ";
    cin >> district;

    string label = city + " " + district;

    label += " Hub";

    cout << "\nFinal Parcel Label: " << label << endl;

    return 0;
}