
#include <iostream>
using namespace std;

class FruitPurchase {
public:
    int quantity;
    int unitPrice;

    int totalCost() {
        return quantity * unitPrice;
    }
};

int main() {
    FruitPurchase fruit;

    cout << "Enter Quantity: ";
    cin >> fruit.quantity;

    cout << "Enter Unit Price: ";
    cin >> fruit.unitPrice;

    cout << "Total cost " << fruit.totalCost() << endl;

    return 0;
}