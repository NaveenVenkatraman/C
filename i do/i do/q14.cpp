#include <iostream>
using namespace std;

int main() {
    int pens = 25;
    int buyPrice = 8;
    int sellPrice = 11;
    int profit = pens * (sellPrice - buyPrice);
    cout << "Total profit = " << profit << " rupees" << endl;
    return 0;
}
