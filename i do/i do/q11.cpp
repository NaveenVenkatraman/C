#include <iostream>
using namespace std;

int main() {
    int fixedCharge = 30;
    int perKm = 9;
    int km = 18;
    int fare = fixedCharge + perKm * km;
    cout << "Fare = " << fare << " rupees" << endl;
    return 0;
}
