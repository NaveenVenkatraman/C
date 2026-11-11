#include <iostream>
using namespace std;

int main() {
    int notebooks = 40;
    int buyingPrice = 18;
    int sellingPrice = 25;
    int profit = notebooks * (sellingPrice - buyingPrice);

    cout << "Total profit: " << profit << " rupees" << endl;

    return 0;
}
