#include <iostream>
using namespace std;

int main() {
    int adultTicket = 120;
    int childTicket = 60;
    int adults = 4;
    int children = 3;
    int total = adultTicket * adults + childTicket * children;
    cout << "Total amount = " << total << " rupees" << endl;
    return 0;
}
